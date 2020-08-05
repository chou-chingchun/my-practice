//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TADOConnection *ADOConn1;
	TADOQuery *ADOQuery1;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TEdit *Edit1;
	TLabel *Label2;
	TEdit *Edit2;
	TLabel *Label3;
	TEdit *Edit3;
	TButton *Button2;
	TGroupBox *GroupBox2;
	TLabel *Label6;
	TEdit *Edit6;
	TButton *Button4;
	TGroupBox *GroupBox3;
	TLabel *Label7;
	TEdit *Edit7;
	TButton *Button6;
	TLabel *Label5;
	TEdit *Edit5;
	TLabel *Label8;
	TEdit *Edit8;
	TGroupBox *GroupBox4;
	TLabel *Label4;
	TEdit *Edit4;
	TButton *Button1;
	TMemo *test;
	TCheckBox *CheckBox1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall testChange(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	void __fastcall fnMemo(AnsiString as);
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
