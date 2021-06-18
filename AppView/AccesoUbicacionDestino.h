#pragma once
#include "Ubicacion.h"
#include "CarritoCustomerForm.h"
namespace AppView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AccesoUbicacionDestino
	/// </summary>
	public ref class AccesoUbicacionDestino : public System::Windows::Forms::Form
	{
	public:
		AccesoUbicacionDestino(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~AccesoUbicacionDestino()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ txtAddressC;
	protected:

	public:



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ txtArrivalTimeC;
	public: System::Windows::Forms::TextBox^ txtNumberContact;
	private:



	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AccesoUbicacionDestino::typeid));
			this->txtAddressC = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtArrivalTimeC = (gcnew System::Windows::Forms::TextBox());
			this->txtNumberContact = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtAddressC
			// 
			this->txtAddressC->BackColor = System::Drawing::SystemColors::Info;
			this->txtAddressC->Location = System::Drawing::Point(309, 23);
			this->txtAddressC->Name = L"txtAddressC";
			this->txtAddressC->ReadOnly = true;
			this->txtAddressC->Size = System::Drawing::Size(342, 26);
			this->txtAddressC->TabIndex = 18;
			this->txtAddressC->TextChanged += gcnew System::EventHandler(this, &AccesoUbicacionDestino::txtAddressC_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(63, 217);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(730, 349);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Ubicaci�n:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"N�mero de contacto:";
			// 
			// txtArrivalTimeC
			// 
			this->txtArrivalTimeC->BackColor = System::Drawing::SystemColors::Info;
			this->txtArrivalTimeC->Location = System::Drawing::Point(309, 131);
			this->txtArrivalTimeC->Name = L"txtArrivalTimeC";
			this->txtArrivalTimeC->ReadOnly = true;
			this->txtArrivalTimeC->Size = System::Drawing::Size(259, 26);
			this->txtArrivalTimeC->TabIndex = 23;
			this->txtArrivalTimeC->TextChanged += gcnew System::EventHandler(this, &AccesoUbicacionDestino::txtArrivalTimeC_TextChanged);
			// 
			// txtNumberContact
			// 
			this->txtNumberContact->BackColor = System::Drawing::SystemColors::Info;
			this->txtNumberContact->Location = System::Drawing::Point(309, 77);
			this->txtNumberContact->Name = L"txtNumberContact";
			this->txtNumberContact->ReadOnly = true;
			this->txtNumberContact->Size = System::Drawing::Size(259, 26);
			this->txtNumberContact->TabIndex = 22;
			this->txtNumberContact->TextChanged += gcnew System::EventHandler(this, &AccesoUbicacionDestino::txtNumberContact_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 20);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Tiempo estimado de llegada:";
			// 
			// AccesoUbicacionDestino
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 578);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtArrivalTimeC);
			this->Controls->Add(this->txtNumberContact);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtAddressC);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AccesoUbicacionDestino";
			this->Text = L"AccesoUbicacionDestino";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtAddressC_TextChanged(System::Object^ sender, System::EventArgs^ e);


	
private: System::Void txtArrivalTimeC_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void txtNumberContact_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
