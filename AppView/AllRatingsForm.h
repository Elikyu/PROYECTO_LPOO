#pragma once

namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AppModel;
	using namespace AppController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de AllRatingsForm
	/// </summary>
	public ref class AllRatingsForm : public System::Windows::Forms::Form
	{
	public:
		AllRatingsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AllRatingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvDeliverymanRating;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dgvCustomerRating;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdSaleDeliveryman;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FullNameDeliveryman;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StarsNumberDeliveryman;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdSaleCustomer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FullNameCustomer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StarsNumberCustomer;








	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvDeliverymanRating = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dgvCustomerRating = (gcnew System::Windows::Forms::DataGridView());
			this->IdSaleDeliveryman = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FullNameDeliveryman = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StarsNumberDeliveryman = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IdSaleCustomer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FullNameCustomer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StarsNumberCustomer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeliverymanRating))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomerRating))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvDeliverymanRating
			// 
			this->dgvDeliverymanRating->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDeliverymanRating->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->IdSaleDeliveryman,
					this->FullNameDeliveryman, this->StarsNumberDeliveryman
			});
			this->dgvDeliverymanRating->Location = System::Drawing::Point(43, 49);
			this->dgvDeliverymanRating->Name = L"dgvDeliverymanRating";
			this->dgvDeliverymanRating->Size = System::Drawing::Size(409, 121);
			this->dgvDeliverymanRating->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(156, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CALIFICACIÓN AL REPARTIDOR";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(171, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"CALIFICACIÓN AL CLIENTE";
			// 
			// dgvCustomerRating
			// 
			this->dgvCustomerRating->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomerRating->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->IdSaleCustomer,
					this->FullNameCustomer, this->StarsNumberCustomer
			});
			this->dgvCustomerRating->Location = System::Drawing::Point(43, 229);
			this->dgvCustomerRating->Name = L"dgvCustomerRating";
			this->dgvCustomerRating->Size = System::Drawing::Size(409, 121);
			this->dgvCustomerRating->TabIndex = 3;
			// 
			// IdSaleDeliveryman
			// 
			this->IdSaleDeliveryman->HeaderText = L"Código";
			this->IdSaleDeliveryman->Name = L"IdSaleDeliveryman";
			// 
			// FullNameDeliveryman
			// 
			this->FullNameDeliveryman->HeaderText = L"Nombre completo";
			this->FullNameDeliveryman->Name = L"FullNameDeliveryman";
			// 
			// StarsNumberDeliveryman
			// 
			this->StarsNumberDeliveryman->HeaderText = L"N° Estrellas";
			this->StarsNumberDeliveryman->Name = L"StarsNumberDeliveryman";
			// 
			// IdSaleCustomer
			// 
			this->IdSaleCustomer->HeaderText = L"Código";
			this->IdSaleCustomer->Name = L"IdSaleCustomer";
			// 
			// FullNameCustomer
			// 
			this->FullNameCustomer->HeaderText = L"Nombre completo";
			this->FullNameCustomer->Name = L"FullNameCustomer";
			// 
			// StarsNumberCustomer
			// 
			this->StarsNumberCustomer->HeaderText = L"N° Estrellas";
			this->StarsNumberCustomer->Name = L"StarsNumberCustomer";
			// 
			// AllRatingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 370);
			this->Controls->Add(this->dgvCustomerRating);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvDeliverymanRating);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AllRatingsForm";
			this->Text = L"AllRatingsForm";
			this->Load += gcnew System::EventHandler(this, &AllRatingsForm::AllRatingsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeliverymanRating))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomerRating))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void AllRatingsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			RefreshDGVAllRatings();
		}
			   void RefreshDGVAllRatings() {
				   RefreshDGVDeliveryman();
				   RefreshDGVCustomer();
			   }

			   void RefreshDGVDeliveryman() {

				   List<Order^>^ orderList = AppManager::QueryAllSales();
				   String^ deliverymanFullName;
				   dgvDeliverymanRating->Rows->Clear();
				   for (int i = 0; i < orderList->Count; i++) {
					   deliverymanFullName = orderList[i]->DeliveryMan->FirstName + " " + orderList[i]->DeliveryMan->LastName;
					   dgvDeliverymanRating->Rows->Add(gcnew array<String^> {
						   "" + orderList[i]-> Id, 
							   deliverymanFullName,
						   "" + orderList[i]->DeliveryManRating
					   });
				   }

			   }
			   void RefreshDGVCustomer() {
				   List<Order^>^ orderCList = AppManager::QueryAllSales();
				   String^ customerFullName;
				   dgvCustomerRating->Rows->Clear();
				   for (int i = 0; i < orderCList->Count; i++) {
					   customerFullName = orderCList[i]->User->FirstName + " " + orderCList[i]->User->LastName;
					   dgvCustomerRating->Rows->Add(gcnew array<String^> {
						   "" + orderCList[i]->Id,
							   customerFullName,
							   "" + orderCList[i]->CustomerRating
					   });
				   }
			   }
};
}
