#pragma once
#define MODEGROCERIES 2
#define MODEHEALTH 3

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
	/// Resumen de StatisticsForm
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~StatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabIncome;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ linechartIncome;


	private: System::Windows::Forms::TabPage^ tabSoldProducts;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ barchartStockProducts;




	protected:


	protected:










	protected:

	protected:





	protected:

	protected:

	protected:

	protected:

	protected:


	protected:










	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabIncome = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linechartIncome = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabSoldProducts = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->barchartStockProducts = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabIncome->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->linechartIncome))->BeginInit();
			this->tabSoldProducts->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barchartStockProducts))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabIncome
			// 
			this->tabIncome->Controls->Add(this->label2);
			this->tabIncome->Controls->Add(this->linechartIncome);
			this->tabIncome->Location = System::Drawing::Point(4, 22);
			this->tabIncome->Name = L"tabIncome";
			this->tabIncome->Padding = System::Windows::Forms::Padding(3);
			this->tabIncome->Size = System::Drawing::Size(452, 310);
			this->tabIncome->TabIndex = 1;
			this->tabIncome->Text = L"Ingresos";
			this->tabIncome->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(338, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"C?digo de la\r\nboleta";
			// 
			// linechartIncome
			// 
			this->linechartIncome->BorderlineWidth = 0;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea1->AxisX->MajorTickMark->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->MinorGrid->LineColor = System::Drawing::Color::Transparent;
			chartArea1->AxisY->MinorTickMark->LineColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->linechartIncome->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->linechartIncome->Legends->Add(legend1);
			this->linechartIncome->Location = System::Drawing::Point(6, 37);
			this->linechartIncome->Name = L"linechartIncome";
			series1->BorderWidth = 5;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Montos";
			this->linechartIncome->Series->Add(series1);
			this->linechartIncome->Size = System::Drawing::Size(412, 267);
			this->linechartIncome->TabIndex = 1;
			this->linechartIncome->Text = L"chartIncome";
			// 
			// tabSoldProducts
			// 
			this->tabSoldProducts->Controls->Add(this->label1);
			this->tabSoldProducts->Controls->Add(this->barchartStockProducts);
			this->tabSoldProducts->Location = System::Drawing::Point(4, 22);
			this->tabSoldProducts->Name = L"tabSoldProducts";
			this->tabSoldProducts->Padding = System::Windows::Forms::Padding(3);
			this->tabSoldProducts->Size = System::Drawing::Size(452, 310);
			this->tabSoldProducts->TabIndex = 0;
			this->tabSoldProducts->Text = L"Stock de productos";
			this->tabSoldProducts->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(360, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Producto";
			// 
			// barchartStockProducts
			// 
			this->barchartStockProducts->BorderlineWidth = 0;
			chartArea2->AxisX->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea2->AxisX->MajorTickMark->LineColor = System::Drawing::Color::White;
			chartArea2->AxisY->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea2->AxisY->MinorGrid->LineColor = System::Drawing::Color::Transparent;
			chartArea2->AxisY->MinorTickMark->LineColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->barchartStockProducts->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->barchartStockProducts->Legends->Add(legend2);
			this->barchartStockProducts->Location = System::Drawing::Point(23, 39);
			this->barchartStockProducts->Name = L"barchartStockProducts";
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series2->Legend = L"Legend1";
			series2->Name = L"Stock";
			this->barchartStockProducts->Series->Add(series2);
			this->barchartStockProducts->Size = System::Drawing::Size(412, 267);
			this->barchartStockProducts->TabIndex = 0;
			this->barchartStockProducts->Text = L"chartStockProduct";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabSoldProducts);
			this->tabControl1->Controls->Add(this->tabIncome);
			this->tabControl1->Location = System::Drawing::Point(18, 22);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(460, 336);
			this->tabControl1->TabIndex = 0;
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 370);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StatisticsForm";
			this->Text = L"StatisticsForm";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::StatisticsForm_Load);
			this->tabIncome->ResumeLayout(false);
			this->tabIncome->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->linechartIncome))->EndInit();
			this->tabSoldProducts->ResumeLayout(false);
			this->tabSoldProducts->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barchartStockProducts))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void StatisticsForm_Load(System::Object^ sender, System::EventArgs^ e) {


				//List<Groceries^>^ groceriesList = AppManager::QueryAllGroceries();
				//List<HealthCare^>^ healthCareList = AppManager::QueryAllHealthCare();
				List<Product^>^ productsList = AppManager::QueryAllProducts();
				if (productsList != nullptr) {
					for (int i = 0; i < productsList->Count; i++) {
						barchartStockProducts->Series["Stock"]->Points->Add(productsList[i]->StockTotal);
						barchartStockProducts->Series["Stock"]->Points[i]->AxisLabel = productsList[i]->Name;
						barchartStockProducts->Series["Stock"]->Points[i]->LegendText = productsList[i]->Name;
						barchartStockProducts->Series["Stock"]->Points[i]->Label = "" + productsList[i]->StockTotal;
					}
				}
				List<Order^>^ orderList = AppManager::QueryAllSales();
				if (orderList != nullptr) {
					for (int i = 0; i < orderList->Count; i++) {
						linechartIncome->Series["Montos"]->Points->Add(orderList[i]->Total);
						linechartIncome->Series["Montos"]->Points[i]->AxisLabel = "" + orderList[i]->Id;
						linechartIncome->Series["Montos"]->Points[i]->LegendText = "" + orderList[i]->Id;
						linechartIncome->Series["Montos"]->Points[i]->Label = "" + orderList[i]->Total;
					}
				}
		}
	};
}
