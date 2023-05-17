#include "PaintForm2.h"
#include <Windows.h>
#include <stdio.h>

#pragma comment(lib, "user32.lib")
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project4::PaintForm2 form;
	Application::Run(% form);
}



struct Vector2D {
	int X,
		Y;
};
Vector2D mousePosition;


Project4::PaintForm2::PaintForm2(void)
{
	InitializeComponent();

	//��������� ������� ��� ������ ������
	openFileDialog1->Filter = "����� ����������� (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
	saveFileDialog1->Filter = "����� ����������� (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
}

System::Void Project4::PaintForm2::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}
	else {
		groupBoxCreateProject->Visible = true;
		groupBoxCreateProject->Location = Point(12, 37);
	}

	return System::Void();
}

System::Void Project4::PaintForm2::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fname;
	saveFileDialog1->ShowDialog();//������ ����������y
	fname = saveFileDialog1->FileName;//����������� ������������ ����������

	//��������, ���� ���������� ���������
	if (fname == "")
		return;

	//����������
	Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
	img->Save(fname);//���������

	MessageBox::Show("����������� ��������� �� ������  \"" + fname + "\".", "��������!");

	return System::Void();
}

System::Void Project4::PaintForm2::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	

	if (groupBoxToolbar->Visible) {
		groupBoxToolbar->Visible = false;
	}
	else {
		groupBoxToolbar->Visible = true;
		groupBoxToolbar->Location = Point(12, 37);
	}

	return System::Void();
}

System::Void Project4::PaintForm2::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("���������� � ���������!", "����������");
}

System::Void Project4::PaintForm2::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

System::Void Project4::PaintForm2::buttonColor_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->ShowDialog();
	color = colorDialog1->Color;

	buttonColor->BackColor = color;

	if (color == Color::Black) { //����� ������ �� ������� � �������
		buttonColor->ForeColor = Color::White;
	}
	else {
		buttonColor->ForeColor = Color::Black;
	}

	pen = gcnew Pen(color, size);

	return System::Void();
}

System::Void Project4::PaintForm2::buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e) {
	clearAll = true;
	
	pictureBox1->Invalidate();
	

	return System::Void();

}

System::Void Project4::PaintForm2::buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e) {
	size = Convert::ToSingle(numericUpDownSize->Value);
	pen = gcnew Pen(color, size);

	return System::Void();
}

System::Void Project4::PaintForm2::buttonActiveLine_Click(System::Object^ sender, System::EventArgs^ e) {
	//�������� ����
	if (statePen != 1) {

		//��������
		statePen = 1;

		buttonActiveLine->BackColor = Color::Green; //���� ������

		//���� ������ ������
		buttonActiveCircle->BackColor = Color::LightGray;
		buttonActiveSquare->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;



		//������ ��������� ���������
		groupBoxSettingsCircle->Visible = false;
		groupBoxSettingsTexture->Visible = false;
		groupBoxSettingsSquare->Visible = false;
	}

	return System::Void();
}

System::Void Project4::PaintForm2::buttonActiveSquare_Click(System::Object^ sender, System::EventArgs^ e) {
	//��������
	if (statePen != 2) {
		//���������
		statePen = 2;


		buttonActiveSquare->BackColor = Color::Green; // ���� ������

		//���� ������ ������
		buttonActiveCircle->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
		buttonActiveLine->BackColor = Color::LightGray;

		//��������� ��������
		groupBoxSettingsSquare->Visible = true;
		groupBoxSettingsSquare->Location = Point(30, 172);

		//������ ��������� ���������
		groupBoxSettingsCircle->Visible = false;
		groupBoxSettingsTexture->Visible = false;
	}
	else {
		//��������� ��� ��������� ������
		if (groupBoxSettingsSquare->Visible) {
			groupBoxSettingsSquare->Visible = false;
		}
		else {
			groupBoxSettingsSquare->Visible = true;
			groupBoxSettingsSquare->Location = Point(30, 172);
		}
	}

	return System::Void();
}

System::Void Project4::PaintForm2::buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e) {
	//��������
	if (statePen != 3) {
		//��������
		statePen = 3;

		//���� ������
		buttonActiveCircle->BackColor = Color::Green;

		//���� ������ ������
		buttonActiveSquare->BackColor = Color::LightGray;
		buttonActiveTexture->BackColor = Color::LightGray;
		buttonActiveLine->BackColor = Color::LightGray;

		//��������� �����
		groupBoxSettingsCircle->Visible = true;
		groupBoxSettingsCircle->Location = Point(30, 172);

		//������ ��������� ���������
		groupBoxSettingsSquare->Visible = false;
		groupBoxSettingsTexture->Visible = false;
	}
	else {
		//��������� ��� ��������� ������
		if (groupBoxSettingsCircle->Visible) {
			groupBoxSettingsCircle->Visible = false;
		}
		else {
			groupBoxSettingsCircle->Visible = true;
			groupBoxSettingsCircle->Location = Point(30, 172);
		}
	}

	return System::Void();
}

System::Void Project4::PaintForm2::buttonActiveTexture_Click(System::Object^ sender, System::EventArgs^ e) {

	//�������� 
	if (statePen != 4) {

		//��������� ��������
		groupBoxSettingsTexture->Visible = true;
		groupBoxSettingsTexture->Location = Point(30, 172);

		//������ ��������� ���������
		groupBoxSettingsSquare->Visible = false;
		groupBoxSettingsCircle->Visible = false;

		if (texture != nullptr) {
			statePen = 4;

			//���� ������
			buttonActiveTexture->BackColor = Color::Green;

			//���� ������ ������
			buttonActiveSquare->BackColor = Color::LightGray;
			buttonActiveCircle->BackColor = Color::LightGray;
			buttonActiveLine->BackColor = Color::LightGray;
		}
	}
	else {
		// ��������� ��� ��������� ������
		if (groupBoxSettingsTexture->Visible) {
			groupBoxSettingsTexture->Visible = false;
		}
		else {
			groupBoxSettingsTexture->Visible = true;
			groupBoxSettingsTexture->Location = Point(30, 172);
		}
	}

	return System::Void();
}

System::Void Project4::PaintForm2::buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file;//������������ �������
	openFileDialog1->ShowDialog();//���� ������ ��������
	file = openFileDialog1->FileName;//���������� ����� � ����

	//��������
	if (file == "openFileDialog1")
		return;

	statePen = 4;

	//��������
	texture = gcnew Bitmap(file);

	//������ ����
	buttonActiveTexture->BackColor = Color::Green;

	//���� ������ �����
	buttonActiveSquare->BackColor = Color::LightGray;
	buttonActiveCircle->BackColor = Color::LightGray;
	buttonActiveLine->BackColor = Color::LightGray;

	return System::Void();
}

System::Void Project4::PaintForm2::buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	float width = Convert::ToSingle(numericUpDownWidthTexture->Value);
	float height = Convert::ToSingle(numericUpDownHeightTexture->Value);

	if (texture != nullptr) {
		texture = gcnew Bitmap(texture, width, height);
	}
	else
		return;
	return System::Void();
}

System::Void Project4::PaintForm2::buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e) {
	
	clearAll = true;
	filename = "openFileDialog1";
	buttonCanvasColor->Visible = true;
	this->Width = Convert::ToInt32(numericUpDownWidthForm->Value);
	this->Height = Convert::ToInt32(numericUpDownHeightForm->Value);

	
	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}

	return System::Void();
}

System::Void Project4::PaintForm2::buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e) {
	buttonCanvasColor -> Visible = false;
	if (radioButtonOriginalSize->Checked == false && radioButtonSetSize->Checked == false) {
		MessageBox::Show("�������� ������ �����!", "��������!");
		return;
	}

	openFileDialog1->ShowDialog();//���� ��� ��������� ������
	filename = openFileDialog1->FileName;//���������� ����


	if (filename == "openFileDialog1")
		return;

	background = gcnew Bitmap(filename);//�������� ����

	if (radioButtonOriginalSize->Checked) {
		this->Width = background->Width;
		this->Height = background->Height;
	}
	else if (radioButtonSetSize->Checked) {
		background = gcnew Bitmap(background, Convert::ToInt32(numericUpDownWidthForm->Value), Convert::ToInt32(numericUpDownHeightForm->Value));//�������� ����
		this->Width = background->Width;
		this->Height = background->Height;
	}

	canvas = Graphics::FromImage(background);//��������� ���
	pictureBox1->Image = background;

	if (groupBoxCreateProject->Visible) {
		groupBoxCreateProject->Visible = false;
	}

	return System::Void();
}

System::Void Project4::PaintForm2::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//�������� ��� ������
	switch (statePen)
	{
	case 1://�����
		if (points->Count > 1) {
			canvas->DrawLines(pen, points->ToArray());
		}
		break;

	case 2://�������
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawRectangle(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthSquare->Value), Convert::ToInt32(numericUpDownHeightSquare->Value));
		break;

	case 3://����
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthCircle->Value), Convert::ToInt32(numericUpDownHeightCircle->Value));
		break;

	case 4://��������
		if (mousePosition.X != -1 && mousePosition.Y != -1)
			canvas->DrawImage(texture, mousePosition.X, mousePosition.Y, texture->Width, texture->Height);
		break;

	default:
		break;
	}
	/*if (Remove) {
		points->Clear();
		canvas = Container;
		
		Remove = false;
		mousePosition.X = -1;
		mousePosition.Y = -1;
	}*/

		

	if (clearAll) {
		points->Clear();
		canvas->Clear(backcolor);
		
		
		

		clearAll = false;

		mousePosition.X = -1;
		mousePosition.Y = -1;

		//���
		
		DrawBackground();
	}
}

System::Void Project4::PaintForm2::pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	//�������� ����
	
	if (statePen == 1) {
		//������������ �������
		
		
		
		points->Clear();
		
		points->Add(e->Location);//����������� �����
		draw = true;

		// pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
	}
	else {
		//����������� ������� ����
		mousePosition.X = e->Location.X;
		mousePosition.Y = e->Location.Y;
	}

	pictureBox1->Invalidate();//�����������
}

System::Void Project4::PaintForm2::pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	//��������
	
	if (draw && points->Contains(Point(e->X, e->Y)) == false) {
		//�������� �������
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			//���������� �����
			points->Add(e->Location);
			
		}
		//����������� 
		pictureBox1->Invalidate();
	}
}

System::Void Project4::PaintForm2::pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	draw = false;// ��������� ����
	
	pictureBox1->Invalidate();

	mousePosition.X = -1;
	mousePosition.Y = -1;
}

System::Void Project4::PaintForm2::pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
	//����� ��������� �������� PictureBox
	if (pictureBox1->Image) { //���� ���� �������, ����������� ����� Btmap � ������������ ����������
		//Bitmap^ img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height, Graphics::FromImage(pictureBox1->Image));

		if (background)
			background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);
		else
			background = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);

		delete canvas;
		canvas = Graphics::FromImage(background);
		//canvas = Graphics::FromImage(img);
		pictureBox1->Image = background;
		//pictureBox1->Image = img;
		pictureBox1->Refresh();
		pictureBox1->Invalidate();
	}
}

System::Void Project4::PaintForm2::PaintForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	//�������������
	color = Color::Red;
	size = 15;
	pen = gcnew Pen(color, size);
	points = gcnew List <Point>();
	draw = false;
	statePen = 1;

	buttonActiveLine->BackColor = Color::Green; // �������� ��������

	//��������� ������
	buttonActiveCircle->BackColor = Color::LightGray;
	buttonActiveSquare->BackColor = Color::LightGray;
	buttonActiveTexture->BackColor = Color::LightGray;

	Bitmap^ Img = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height); // �������� �������
	canvas = Graphics::FromImage(Img);
	pictureBox1->Image = Img;
	pictureBox1->BackColor = Color::White;
	//Container = Graphics::FromImage(Img);

	//����������� ��������
	numericUpDownWidthForm->Minimum = 300;
	numericUpDownHeightForm->Minimum = 300;
	numericUpDownWidthForm->Maximum = GetSystemMetrics(SM_CXSCREEN);
	numericUpDownHeightForm->Maximum = GetSystemMetrics(SM_CYSCREEN);

	clearAll = false;
	Remove = false;

	filename = "openFileDialog1";

	buttonColor->BackColor = color;
	

	return System::Void();
}

void Project4::PaintForm2::DrawBackground() {
	//��������� ���
	if (filename != "openFileDialog1") {
		
		background = gcnew Bitmap(filename);
		background = gcnew Bitmap(background, pictureBox1->Width, pictureBox1->Height);

		delete canvas;
		canvas = Graphics::FromImage(background);
		pictureBox1->Image = background;
		pictureBox1->Refresh();
		pictureBox1->Invalidate();
	
	}
	else {


		background = gcnew Bitmap( pictureBox1->Width, pictureBox1->Height);
		delete canvas;
		canvas = Graphics::FromImage(background);
		pictureBox1->Image = background;
		pictureBox1->Refresh();
		pictureBox1->Invalidate();
	}
}
System::Void Project4::PaintForm2::buttonCanvasColor_Click(System::Object^ sender, System::EventArgs^ e) {


	

		colorDialog2->ShowDialog();



		backcolor = colorDialog2->Color;
		buttonCanvasColor->BackColor = backcolor;
		pictureBox1->BackColor=backcolor;
		
		if (backcolor == Color::Black) { //����� ������ �� ������� � �������
			buttonCanvasColor->ForeColor = Color::White;
		}
		else {
			buttonCanvasColor->ForeColor = Color::Black;
		}
		

	
		

}
/*System::Void Project4::PaintForm2::buttonRemove_Click(System::Object^ sender, System::EventArgs^ e) {
	Remove = true;
	pictureBox1->Invalidate();
	return System::Void();
}*/