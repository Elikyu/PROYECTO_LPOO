#include "CarritoCustomerForm.h"
#include "Login.h"
#include "Ubicacion.h"


System::Void AppView::CarritoCustomerForm::btnASCustom_Click(System::Object^ sender, System::EventArgs^ e)
{
	Ubicacion^ aForm = gcnew Ubicacion();
	int customerId = UserManager::ReturnIDbyUserName(textUserNameCS->Text);
	User^ u = UserManager::QueryUserbyId(customerId);
	aForm->txtAddressC->Text = u->Address;
	aForm->txtUSER->Text = u->Username;
	aForm->ShowDialog();
}

int AppView::CarritoCustomerForm::ValidateInfo() {
	//-1: No se ha elegido una direccion
    //-2: La fecha es menor a la fecha actual
    //-3: No hay un total
    //-4: No se ha elegido un metodo de pago
	//if (txtSAddres->Text =="")
	//	return -1;
	if (dtpSaleDate->Value <= DateTime::Today.AddDays(-1))
		return -2;
	if (txtTotalSale->Text == "" || Double::Parse(txtTotalSale->Text) <= 0)
		return -3;
	if (cmbTypePayment->SelectedIndex < 0)
		return -4;
}

System::Void AppView::CarritoCustomerForm::btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e) {
	int validatedData = ValidateInfo();
	//if (validatedData == -1) {
		//MessageBox::Show("Debe seleccionar una direcci?n.");
	//}
	 if (validatedData == -2) {
		MessageBox::Show("La fecha no debe ser anterior a la fecha actual.");
	}
	if (validatedData == -3) {
		MessageBox::Show("El total debe ser mayor a cero.");
	}if (validatedData == -4) {
	    MessageBox::Show("Debe seleccionar un m?todo de pago.");
	}

	else {

		//Boleta^ aForm = gcnew Boleta();
		//aForm->ShowDialog();
		Order^ sale = gcnew Order();
		int customerId = UserManager::ReturnIDbyUserName(textUserNameCS->Text);
		sale->User = UserManager::QueryUserbyId(customerId);
		DateTime dt = dtpSaleDate->Value;
		sale->Date = dt.Now + "" ; // ToString();
		sale->Total = Double::Parse(txtTotalSale->Text);
		//g
		char pt;
		//String^ Tarjeta = ((ComboBoxItem2^)cmbTypePayment->SelectedItem)->Name->ToString();
		String^ Tarjeta = ("Tarjeta");
		if (Tarjeta == "Tarjeta") {
			char pt = 'T';
		}
		sale->PaymentType = pt;
		///g
		sale->Details = gcnew List<SaleDetail^>();
		
		SaleDetail^ saledetail;
		for (int i = 0; i < dgvCarrito->RowCount; i++) {
			saledetail = gcnew SaleDetail();

			int productId = AppManager::ReturnIDbyProductName(dgvCarrito->Rows[i]->Cells[0]->Value->ToString());
			saledetail->Product = AppManager::QueryProductById(productId);
			
			saledetail->Quantity = Double::Parse(dgvCarrito->Rows[i]->Cells[1]->Value->ToString());
			saledetail->UnitPrice = Double::Parse(dgvCarrito->Rows[i]->Cells[2]->Value->ToString());
			saledetail->SubTotal = Double::Parse(dgvCarrito->Rows[i]->Cells[3]->Value->ToString());
			saledetail->Total = Double::Parse(txtTotalSale->Text);
			sale->Details->Add(saledetail);

			double qua = Double::Parse(dgvCarrito->Rows[i]->Cells[1]->Value->ToString());
			Product^ product = AppManager::QueryProductById(productId);
			product->StockTotal = product->StockTotal - qua;
			AppManager::UpdateProduct(product);
		}
		
		
		sale->Id=AppManager::QueryLastSaleId()+1;
		sale->Status = 'W';

			
		Boleta^ aForm = gcnew Boleta();       
		User^ userB = gcnew User();
		userB= UserManager::QueryUserbyId(customerId);
		aForm->textNameCB->Text = userB->FirstName + " " + userB->LastName;
		aForm->textDateTimeB->Text = sale->Date;
		aForm->txtDocumentNumberCB->Text = userB->DocumentNumber;
		sale->Total = Double::Parse(txtTotalSale->Text);
		aForm->textTotalSaleB->Text = txtTotalSale->Text;
		aForm->textIdSaleDetailB->Text = "DMC- " + (sale->Id).ToString();
		aForm->textTypePaymentB->Text = "Tarjeta";

		Customer^ customerB = UserManager::QueryCustomerbyId(customerId);
		List<BonusPoints^>^ bonuspointsList = AppManager::QueryAllBonusPointsPQ();
		for (int i = 0; i < bonuspointsList->Count; i++) {
			bonuspointsList[i]->PointsQuantity;
			bonuspointsList[i]->PercentageDiscount;
			bonuspointsList[i]->SolesQuantity;
			bonuspointsList[i]->PointsEarned;
		
			if (bonuspointsList[2]->SolesQuantity <= sale->Total) {
				customerB->CustomerPoints = customerB->CustomerPoints + bonuspointsList[2]->PointsEarned;
				int a = customerB->Id;
			}
		}
		
		
		


		AppManager::RegisterSale(sale);
		MessageBox::Show("Se ha registrado la venta exitosamente para el cliente: " + textUserNameCS->Text);
		aForm->Show();
	//	aForm->textTotalSaleB = sale->Total;

	}

}

