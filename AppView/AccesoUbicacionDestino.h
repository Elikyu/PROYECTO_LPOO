#pragma once

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::TextBox^ txtArrivalTimeC;
	public:
	private: System::Windows::Forms::TextBox^ txtCustomAddressC;
	private: System::Windows::Forms::Button^ btnAddressCheck_Click;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AccesoUbicacionDestino::typeid));
			this->txtAddressC = (gcnew System::Windows::Forms::TextBox());
			this->txtArrivalTimeC = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomAddressC = (gcnew System::Windows::Forms::TextBox());
			this->btnAddressCheck_Click = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtAddressC
			// 
			this->txtAddressC->Location = System::Drawing::Point(93, 17);
			this->txtAddressC->Margin = System::Windows::Forms::Padding(2);
			this->txtAddressC->Name = L"txtAddressC";
			this->txtAddressC->ReadOnly = true;
			this->txtAddressC->Size = System::Drawing::Size(229, 20);
			this->txtAddressC->TabIndex = 18;
			// 
			// txtArrivalTimeC
			// 
			this->txtArrivalTimeC->Location = System::Drawing::Point(206, 308);
			this->txtArrivalTimeC->Margin = System::Windows::Forms::Padding(2);
			this->txtArrivalTimeC->Name = L"txtArrivalTimeC";
			this->txtArrivalTimeC->ReadOnly = true;
			this->txtArrivalTimeC->Size = System::Drawing::Size(174, 20);
			this->txtArrivalTimeC->TabIndex = 17;
			// 
			// txtCustomAddressC
			// 
			this->txtCustomAddressC->Location = System::Drawing::Point(206, 275);
			this->txtCustomAddressC->Margin = System::Windows::Forms::Padding(2);
			this->txtCustomAddressC->Name = L"txtCustomAddressC";
			this->txtCustomAddressC->Size = System::Drawing::Size(174, 20);
			this->txtCustomAddressC->TabIndex = 16;
			this->txtCustomAddressC->Text = L"Escribir  Direccion";
			// 
			// btnAddressCheck_Click
			// 
			this->btnAddressCheck_Click->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnAddressCheck_Click->ForeColor = System::Drawing::Color::Black;
			this->btnAddressCheck_Click->Location = System::Drawing::Point(297, 338);
			this->btnAddressCheck_Click->Margin = System::Windows::Forms::Padding(2);
			this->btnAddressCheck_Click->Name = L"btnAddressCheck_Click";
			this->btnAddressCheck_Click->Size = System::Drawing::Size(83, 27);
			this->btnAddressCheck_Click->TabIndex = 15;
			this->btnAddressCheck_Click->Text = L"Confirmar";
			this->btnAddressCheck_Click->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 310);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Tiempo estimado de llegada:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(93, 44);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(487, 227);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// AccesoUbicacionDestino
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 376);
			this->Controls->Add(this->txtAddressC);
			this->Controls->Add(this->txtArrivalTimeC);
			this->Controls->Add(this->txtCustomAddressC);
			this->Controls->Add(this->btnAddressCheck_Click);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AccesoUbicacionDestino";
			this->Text = L"AccesoUbicacionDestino";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
