#include "SelectSegmentation.h"

#include <wx/msgdlg.h>
//(*InternalHeaders(SelectSegmentation)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//(*IdInit(SelectSegmentation)
const long SelectSegmentation::ID_STATICBOX2 = wxNewId();
const long SelectSegmentation::ID_BUTTON1 = wxNewId();
const long SelectSegmentation::ID_BUTTON2 = wxNewId();
const long SelectSegmentation::ID_STATICBOX1 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT1 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL1 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL2 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL3 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT2 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL4 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL5 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL6 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT3 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT4 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT5 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT6 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL1 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL2 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT7 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL3 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL4 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT8 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL7 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT9 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL8 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT10 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL5 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL6 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT11 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL7 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL8 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL9 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL10 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL11 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL12 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL13 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL14 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT13 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT14 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT16 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL15 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL16 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL17 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT17 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL18 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL19 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL20 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL21 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL22 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL23 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT18 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT19 = wxNewId();
const long SelectSegmentation::ID_CHOICE1 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX1 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX2 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT12 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL9 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL10 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL11 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT15 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL12 = wxNewId();
const long SelectSegmentation::ID_STATICLINE1 = wxNewId();
const long SelectSegmentation::ID_BUTTON3 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX3 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT20 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL24 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX4 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT21 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL13 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT22 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL14 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT23 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT24 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL15 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT25 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT26 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL25 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX5 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL16 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL17 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL18 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX6 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT27 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL26 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL27 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL28 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL29 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT28 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL30 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL31 = wxNewId();
const long SelectSegmentation::ID_TEXTCTRL32 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT29 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX7 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX8 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX9 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX10 = wxNewId();
const long SelectSegmentation::ID_CHECKBOX11 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT30 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL19 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL20 = wxNewId();
const long SelectSegmentation::ID_SPINCTRL21 = wxNewId();
const long SelectSegmentation::ID_STATICTEXT31 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SelectSegmentation,wxDialog)
	//(*EventTable(SelectSegmentation)
	//*)
END_EVENT_TABLE()

SelectSegmentation::SelectSegmentation(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(SelectSegmentation)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(748,599));
	StaticBox2 = new wxStaticBox(this, ID_STATICBOX2, _("Depth"), wxPoint(376,16), wxSize(328,496), 0, _T("ID_STATICBOX2"));
	ButtonCancel = new wxButton(this, ID_BUTTON1, _("Cancel"), wxPoint(624,520), wxSize(85,56), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	ButtonOk = new wxButton(this, ID_BUTTON2, _("Ok"), wxPoint(368,520), wxSize(248,56), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	StaticBox1 = new wxStaticBox(this, ID_STATICBOX1, _("RGB"), wxPoint(16,16), wxSize(352,376), 0, _T("ID_STATICBOX1"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Minimum : "), wxPoint(40,66), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	minR = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxPoint(128,64), wxSize(56,23), 0, 0, 255, 0, _T("ID_SPINCTRL1"));
	minR->SetValue(_T("0"));
	minG = new wxSpinCtrl(this, ID_SPINCTRL2, _T("0"), wxPoint(200,64), wxSize(56,23), 0, 0, 255, 0, _T("ID_SPINCTRL2"));
	minG->SetValue(_T("0"));
	minB = new wxSpinCtrl(this, ID_SPINCTRL3, _T("0"), wxPoint(272,64), wxSize(56,23), 0, 0, 255, 0, _T("ID_SPINCTRL3"));
	minB->SetValue(_T("0"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Maximum :"), wxPoint(40,100), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	maxR = new wxSpinCtrl(this, ID_SPINCTRL4, _T("255"), wxPoint(128,96), wxSize(56,23), 0, 0, 255, 255, _T("ID_SPINCTRL4"));
	maxR->SetValue(_T("255"));
	maxG = new wxSpinCtrl(this, ID_SPINCTRL5, _T("255"), wxPoint(200,96), wxSize(56,23), 0, 0, 255, 255, _T("ID_SPINCTRL5"));
	maxG->SetValue(_T("255"));
	maxB = new wxSpinCtrl(this, ID_SPINCTRL6, _T("255"), wxPoint(272,96), wxSize(56,23), 0, 0, 255, 255, _T("ID_SPINCTRL6"));
	maxB->SetValue(_T("255"));
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("R"), wxPoint(150,40), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("G"), wxPoint(225,40), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("B"), wxPoint(294,40), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Crop:"), wxPoint(40,160), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	cropRGBX1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("0"), wxPoint(80,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	cropRGBY1 = new wxTextCtrl(this, ID_TEXTCTRL2, _("0"), wxPoint(130,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("---->"), wxPoint(188,158), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	cropRGBX2 = new wxTextCtrl(this, ID_TEXTCTRL3, _("640"), wxPoint(232,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	cropRGBY2 = new wxTextCtrl(this, ID_TEXTCTRL4, _("480"), wxPoint(284,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Minimum :"), wxPoint(392,40), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	minDepth = new wxSpinCtrl(this, ID_SPINCTRL7, _T("0"), wxPoint(392,56), wxDefaultSize, 0, 0, 10000, 0, _T("ID_SPINCTRL7"));
	minDepth->SetValue(_T("0"));
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Maximum :"), wxPoint(512,40), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	maxDepth = new wxSpinCtrl(this, ID_SPINCTRL8, _T("10000"), wxPoint(512,56), wxDefaultSize, 0, 0, 10000, 10000, _T("ID_SPINCTRL8"));
	maxDepth->SetValue(_T("10000"));
	StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("Crop:"), wxPoint(392,160), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	cropDepthX1 = new wxTextCtrl(this, ID_TEXTCTRL5, _("0"), wxPoint(432,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	cropDepthY1 = new wxTextCtrl(this, ID_TEXTCTRL6, _("0"), wxPoint(482,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("---->"), wxPoint(536,158), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	cropDepthX2 = new wxTextCtrl(this, ID_TEXTCTRL7, _("640"), wxPoint(584,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	cropDepthY2 = new wxTextCtrl(this, ID_TEXTCTRL8, _("480"), wxPoint(640,156), wxSize(48,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	bboxMinX = new wxTextCtrl(this, ID_TEXTCTRL9, _("0.0"), wxPoint(496,224), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	bboxMinY = new wxTextCtrl(this, ID_TEXTCTRL10, _("0.0"), wxPoint(560,224), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	bboxMinZ = new wxTextCtrl(this, ID_TEXTCTRL11, _("0.0"), wxPoint(624,224), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	bboxMaxX = new wxTextCtrl(this, ID_TEXTCTRL12, _("0.0"), wxPoint(496,256), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	bboxMaxY = new wxTextCtrl(this, ID_TEXTCTRL13, _("0.0"), wxPoint(560,256), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	bboxMaxZ = new wxTextCtrl(this, ID_TEXTCTRL14, _("0.0"), wxPoint(624,256), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	StaticText13 = new wxStaticText(this, ID_STATICTEXT13, _("Minimum"), wxPoint(424,228), wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText14 = new wxStaticText(this, ID_STATICTEXT14, _("Maximum"), wxPoint(424,258), wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText16 = new wxStaticText(this, ID_STATICTEXT16, _("Point A"), wxPoint(424,312), wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	planeP1X = new wxTextCtrl(this, ID_TEXTCTRL15, _("0.0"), wxPoint(496,308), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL15"));
	planeP1Y = new wxTextCtrl(this, ID_TEXTCTRL16, _("0.0"), wxPoint(560,308), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL16"));
	planeP1Z = new wxTextCtrl(this, ID_TEXTCTRL17, _("0.0"), wxPoint(624,308), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL17"));
	StaticText17 = new wxStaticText(this, ID_STATICTEXT17, _("Point B"), wxPoint(424,340), wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	planeP2X = new wxTextCtrl(this, ID_TEXTCTRL18, _("0.0"), wxPoint(496,336), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL18"));
	planeP2Y = new wxTextCtrl(this, ID_TEXTCTRL19, _("0.0"), wxPoint(560,336), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL19"));
	planeP2Z = new wxTextCtrl(this, ID_TEXTCTRL20, _("0.0"), wxPoint(624,336), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL20"));
	planeP3X = new wxTextCtrl(this, ID_TEXTCTRL21, _("0.0"), wxPoint(496,364), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL21"));
	planeP3Y = new wxTextCtrl(this, ID_TEXTCTRL22, _("0.0"), wxPoint(560,364), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL22"));
	planeP3Z = new wxTextCtrl(this, ID_TEXTCTRL23, _("0.0"), wxPoint(624,364), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL23"));
	StaticText18 = new wxStaticText(this, ID_STATICTEXT18, _("Point C"), wxPoint(424,368), wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	StaticText19 = new wxStaticText(this, ID_STATICTEXT19, _("Combination Method"), wxPoint(16,520), wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	ChoiceCombination = new wxChoice(this, ID_CHOICE1, wxPoint(168,512), wxSize(168,25), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	ChoiceCombination->SetSelection( ChoiceCombination->Append(_("No combination")) );
	ChoiceCombination->Append(_("AND combination"));
	ChoiceCombination->Append(_("OR combination"));
	ChoiceCombination->Append(_("XOR combination "));
	ChoiceCombination->Append(_("RGB only"));
	ChoiceCombination->Append(_("Depth only "));
	ChoiceCombination->Append(_("Swap RGB/Depth"));
	ChoiceCombination->Append(_("RGB no segmentation , Depth use RGB"));
	ChoiceCombination->Append(_("Depth no segmentation ,  RGB use Depth"));
	CheckBoxBoundingBox = new wxCheckBox(this, ID_CHECKBOX1, _("Bounding Box"), wxPoint(392,204), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBoxBoundingBox->SetValue(false);
	CheckBoxPlane = new wxCheckBox(this, ID_CHECKBOX2, _("Plane Segmentation"), wxPoint(392,288), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	CheckBoxPlane->SetValue(false);
	StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("Erase Color is "), wxPoint(32,356), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	eraseColorR = new wxSpinCtrl(this, ID_SPINCTRL9, _T("255"), wxPoint(136,352), wxSize(52,23), 0, 0, 255, 255, _T("ID_SPINCTRL9"));
	eraseColorR->SetValue(_T("255"));
	eraseColorG = new wxSpinCtrl(this, ID_SPINCTRL10, _T("255"), wxPoint(192,352), wxSize(52,23), 0, 0, 255, 255, _T("ID_SPINCTRL10"));
	eraseColorG->SetValue(_T("255"));
	eraseColorB = new wxSpinCtrl(this, ID_SPINCTRL11, _T("255"), wxPoint(248,352), wxSize(52,23), 0, 0, 255, 255, _T("ID_SPINCTRL11"));
	eraseColorB->SetValue(_T("255"));
	StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("Erase Depth is "), wxPoint(376,488), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	eraseDepth = new wxSpinCtrl(this, ID_SPINCTRL12, _T("0"), wxPoint(480,482), wxDefaultSize, 0, 0, 10000, 0, _T("ID_SPINCTRL12"));
	eraseDepth->SetValue(_T("0"));
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxPoint(20,510), wxSize(700,0), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	ButtonExport = new wxButton(this, ID_BUTTON3, _("Export To File"), wxPoint(16,544), wxSize(120,27), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	CheckBoxSegmentMovement = new wxCheckBox(this, ID_CHECKBOX3, _("Segment Depth Movement"), wxPoint(392,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
	CheckBoxSegmentMovement->SetValue(false);
	StaticText20 = new wxStaticText(this, ID_STATICTEXT20, _("Movement Threshold"), wxPoint(392,120), wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	TextCtrlMovementThreshold = new wxTextCtrl(this, ID_TEXTCTRL24, _("100"), wxPoint(552,114), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL24"));
	CheckBoxSegmentRGBMovement = new wxCheckBox(this, ID_CHECKBOX4, _("Segment RGB Movement"), wxPoint(24,200), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
	CheckBoxSegmentRGBMovement->SetValue(false);
	StaticText21 = new wxStaticText(this, ID_STATICTEXT21, _("Threshold"), wxPoint(40,256), wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	SpinCtrlMovementR = new wxSpinCtrl(this, ID_SPINCTRL13, _T("10"), wxPoint(120,240), wxSize(56,27), 0, 0, 255, 10, _T("ID_SPINCTRL13"));
	SpinCtrlMovementR->SetValue(_T("10"));
	StaticText22 = new wxStaticText(this, ID_STATICTEXT22, _("R"), wxPoint(136,224), wxDefaultSize, 0, _T("ID_STATICTEXT22"));
	SpinCtrlMovementG = new wxSpinCtrl(this, ID_SPINCTRL14, _T("10"), wxPoint(184,240), wxSize(56,27), 0, 0, 255, 10, _T("ID_SPINCTRL14"));
	SpinCtrlMovementG->SetValue(_T("10"));
	StaticText23 = new wxStaticText(this, ID_STATICTEXT23, _("G"), wxPoint(200,224), wxDefaultSize, 0, _T("ID_STATICTEXT23"));
	StaticText24 = new wxStaticText(this, ID_STATICTEXT24, _("B"), wxPoint(264,224), wxDefaultSize, 0, _T("ID_STATICTEXT24"));
	SpinCtrlMovementB = new wxSpinCtrl(this, ID_SPINCTRL15, _T("10"), wxPoint(248,240), wxSize(56,27), 0, 0, 100, 10, _T("ID_SPINCTRL15"));
	SpinCtrlMovementB->SetValue(_T("10"));
	StaticText25 = new wxStaticText(this, ID_STATICTEXT25, _("Move"), wxPoint(55,240), wxDefaultSize, 0, _T("ID_STATICTEXT25"));
	StaticText26 = new wxStaticText(this, ID_STATICTEXT26, _("Offset Normal : "), wxPoint(424,456), wxDefaultSize, 0, _T("ID_STATICTEXT26"));
	planeNormalOffset = new wxTextCtrl(this, ID_TEXTCTRL25, _("0.0"), wxPoint(536,452), wxSize(56,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL25"));
	CheckBoxAutoPlaneSegmentation = new wxCheckBox(this, ID_CHECKBOX5, _("Auto"), wxPoint(560,288), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
	CheckBoxAutoPlaneSegmentation->SetValue(false);
	replaceR = new wxSpinCtrl(this, ID_SPINCTRL16, _T("0"), wxPoint(156,307), wxSize(56,27), 0, 0, 255, 0, _T("ID_SPINCTRL16"));
	replaceR->SetValue(_T("0"));
	replaceG = new wxSpinCtrl(this, ID_SPINCTRL17, _T("0"), wxPoint(212,307), wxSize(56,27), 0, 0, 255, 0, _T("ID_SPINCTRL17"));
	replaceG->SetValue(_T("0"));
	replaceB = new wxSpinCtrl(this, ID_SPINCTRL18, _T("0"), wxPoint(268,307), wxSize(56,27), 0, 0, 255, 0, _T("ID_SPINCTRL18"));
	replaceB->SetValue(_T("0"));
	CheckBoxReplaceColor = new wxCheckBox(this, ID_CHECKBOX6, _("Replace Color"), wxPoint(24,308), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
	CheckBoxReplaceColor->SetValue(false);
	StaticText27 = new wxStaticText(this, ID_STATICTEXT27, _("Size"), wxPoint(608,456), wxDefaultSize, 0, _T("ID_STATICTEXT27"));
	planeNormalSize = new wxTextCtrl(this, ID_TEXTCTRL26, _("0.0"), wxPoint(640,450), wxSize(40,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL26"));
	PlanePointX = new wxTextCtrl(this, ID_TEXTCTRL27, _("0.0"), wxPoint(496,392), wxSize(56,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL27"));
	PlanePointY = new wxTextCtrl(this, ID_TEXTCTRL28, _("0.0"), wxPoint(560,392), wxSize(56,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL28"));
	PlanePointZ = new wxTextCtrl(this, ID_TEXTCTRL29, _("0.0"), wxPoint(624,392), wxSize(56,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL29"));
	StaticText28 = new wxStaticText(this, ID_STATICTEXT28, _("Point "), wxPoint(424,400), wxDefaultSize, 0, _T("ID_STATICTEXT28"));
	NormalX = new wxTextCtrl(this, ID_TEXTCTRL30, _("0.0"), wxPoint(496,424), wxSize(56,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL30"));
	NormalY = new wxTextCtrl(this, ID_TEXTCTRL31, _("0.0"), wxPoint(560,424), wxSize(56,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL31"));
	NormalZ = new wxTextCtrl(this, ID_TEXTCTRL32, _("0.0"), wxPoint(624,424), wxSize(56,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL32"));
	StaticText29 = new wxStaticText(this, ID_STATICTEXT29, _("Normal"), wxPoint(424,430), wxDefaultSize, 0, _T("ID_STATICTEXT29"));
	CheckBoxAutoPlane3Point = new wxCheckBox(this, ID_CHECKBOX7, _("3 Point"), wxPoint(624,288), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX7"));
	CheckBoxAutoPlane3Point->SetValue(false);
	CheckBoxInvertRGB = new wxCheckBox(this, ID_CHECKBOX8, _("Invert RGB"), wxPoint(32,480), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX8"));
	CheckBoxInvertRGB->SetValue(false);
	CheckBoxInvertDepth = new wxCheckBox(this, ID_CHECKBOX9, _("Invert Depth"), wxPoint(144,480), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX9"));
	CheckBoxInvertDepth->SetValue(false);
	CheckBoxErode = new wxCheckBox(this, ID_CHECKBOX10, _("Erode"), wxPoint(104,456), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX10"));
	CheckBoxErode->SetValue(false);
	CheckBoxDilate = new wxCheckBox(this, ID_CHECKBOX11, _("Dilate"), wxPoint(32,456), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX11"));
	CheckBoxDilate->SetValue(false);
	StaticText30 = new wxStaticText(this, ID_STATICTEXT30, _("x"), wxPoint(232,456), wxDefaultSize, 0, _T("ID_STATICTEXT30"));
	SpinCtrlKernWidth = new wxSpinCtrl(this, ID_SPINCTRL19, _T("4"), wxPoint(180,452), wxSize(48,28), 0, 1, 10, 4, _T("ID_SPINCTRL19"));
	SpinCtrlKernWidth->SetValue(_T("4"));
	SpinCtrlKernHeight = new wxSpinCtrl(this, ID_SPINCTRL20, _T("4"), wxPoint(244,452), wxSize(48,27), 0, 1, 10, 4, _T("ID_SPINCTRL20"));
	SpinCtrlKernHeight->SetValue(_T("4"));
	SpinCtrlKernThreshold = new wxSpinCtrl(this, ID_SPINCTRL21, _T("0"), wxPoint(314,452), wxSize(48,27), 0, 0, 100, 0, _T("ID_SPINCTRL21"));
	SpinCtrlKernThreshold->SetValue(_T("0"));
	StaticText31 = new wxStaticText(this, ID_STATICTEXT31, _("<"), wxPoint(296,456), wxDefaultSize, 0, _T("ID_STATICTEXT31"));
	FileDialogExport = new wxFileDialog(this, _("Export Segmentation To File"), wxEmptyString, wxEmptyString, _(".txt"), wxFD_DEFAULT_STYLE|wxFD_SAVE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SelectSegmentation::OnButtonCancelClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SelectSegmentation::OnButtonOkClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SelectSegmentation::OnButtonExportClick);
	//*)

	reloadSegmentationFormFromValues();
}

SelectSegmentation::~SelectSegmentation()
{
	//(*Destroy(SelectSegmentation)
	//*)
}


int SelectSegmentation::reloadSegmentationFormFromValues()
{
  wxString val;

  val.Clear(); val<<selectedDepthConf.minDepth;  minDepth->SetValue(val);
  val.Clear(); val<<selectedDepthConf.maxDepth;  maxDepth->SetValue(val);

  CheckBoxBoundingBox->SetValue( (selectedDepthConf.enableBBox!=0) );
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.bboxX1); bboxMinX->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.bboxY1); bboxMinY->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.bboxZ1); bboxMinZ->SetValue(val);

  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.bboxX2); bboxMaxX->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.bboxY2); bboxMaxY->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.bboxZ2); bboxMaxZ->SetValue(val);


  CheckBoxAutoPlane3Point->SetValue( (selectedDepthConf.doNotGenerateNormalFrom3Points!=1) );

  CheckBoxAutoPlaneSegmentation->SetValue( (selectedDepthConf.autoPlaneSegmentation!=0) );
  CheckBoxPlane->SetValue( (selectedDepthConf.enablePlaneSegmentation!=0) );
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p1[0]); planeP1X->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p1[1]); planeP1Y->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p1[2]); planeP1Z->SetValue(val);

  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p2[0]); planeP2X->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p2[1]); planeP2Y->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p2[2]); planeP2Z->SetValue(val);

  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p3[0]); planeP3X->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p3[1]); planeP3Y->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.p3[2]); planeP3Z->SetValue(val);

  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.center[0]); PlanePointX->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.center[1]); PlanePointY->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.center[2]); PlanePointZ->SetValue(val);

  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.normal[0]); NormalX->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.normal[1]); NormalY->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.normal[2]); NormalZ->SetValue(val);

  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.planeNormalOffset); planeNormalOffset->SetValue(val);
  val.Clear(); val.Printf(wxT("%0.2f"),selectedDepthConf.planeNormalSize);   planeNormalSize->SetValue(val);

   val.Clear(); val.Printf(wxT("%u"),selectedDepthConf.minX); cropDepthX1->SetValue(val);
   val.Clear(); val.Printf(wxT("%u"),selectedDepthConf.minY); cropDepthY1->SetValue(val);
   val.Clear(); val.Printf(wxT("%u"),selectedDepthConf.maxX); cropDepthX2->SetValue(val);
   val.Clear(); val.Printf(wxT("%u"),selectedDepthConf.maxY); cropDepthY2->SetValue(val);



   val.Clear(); val.Printf(wxT("%u"),selectedRGBConf.minX); cropRGBX1->SetValue(val);
   val.Clear(); val.Printf(wxT("%u"),selectedRGBConf.minY); cropRGBY1->SetValue(val);
   val.Clear(); val.Printf(wxT("%u"),selectedRGBConf.maxX); cropRGBX2->SetValue(val);
   val.Clear(); val.Printf(wxT("%u"),selectedRGBConf.maxY); cropRGBY2->SetValue(val);

   minR->SetValue(selectedRGBConf.minR );
   minG->SetValue(selectedRGBConf.minG);
   minB->SetValue(selectedRGBConf.minB);
   maxR->SetValue(selectedRGBConf.maxR);
   maxG->SetValue(selectedRGBConf.maxG );
   maxB->SetValue(selectedRGBConf.maxB);


   CheckBoxSegmentRGBMovement->SetValue( (selectedRGBConf.enableReplacingColors!=0) );
   replaceR->SetValue(selectedRGBConf.replaceR);
   replaceG->SetValue(selectedRGBConf.replaceG );
   replaceB->SetValue(selectedRGBConf.replaceB);


  CheckBoxSegmentRGBMovement->SetValue( (selectedRGBConf.enableRGBMotionDetection!=0) );
  SpinCtrlMovementR->SetValue(selectedRGBConf.motionRThreshold);
  SpinCtrlMovementG->SetValue(selectedRGBConf.motionGThreshold);
  SpinCtrlMovementB->SetValue(selectedRGBConf.motionBThreshold);

  CheckBoxSegmentMovement->SetValue( (selectedDepthConf.enableDepthMotionDetection!=0) );
  val.Clear(); val.Printf(wxT("%u"),selectedDepthConf.motionDistanceThreshold); TextCtrlMovementThreshold->SetValue(val);



  CheckBoxInvertDepth->SetValue( (bool) (selectedDepthConf.invert!=0) );
  CheckBoxInvertRGB->SetValue( (bool) (selectedRGBConf.invert!=0) );


  CheckBoxErode->SetValue ( (bool) ( (selectedRGBConf.erode==1)  || ((selectedDepthConf.erode==1))  ) );
  CheckBoxDilate->SetValue( (bool) ( (selectedRGBConf.dilate==1) || ((selectedDepthConf.dilate==1)) ) );



   SpinCtrlKernHeight->SetValue(selectedRGBConf.kernHeight);
   SpinCtrlKernHeight->SetValue(selectedDepthConf.kernHeight);

   SpinCtrlKernWidth->SetValue(selectedRGBConf.kernWidth);
   SpinCtrlKernWidth->SetValue(selectedDepthConf.kernWidth);

   SpinCtrlKernThreshold->SetValue(selectedRGBConf.kernThreshold);
   SpinCtrlKernThreshold->SetValue(selectedDepthConf.kernThreshold);


  ChoiceCombination->SetSelection(selectedCombinationMode);

  Refresh();

  return 1;
}


int SelectSegmentation::saveSegmentationValuesFromForm()
{
   double dValue;
   long value;

   if (CheckBoxBoundingBox->IsChecked())
   {
    if (this->bboxMinX->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.bboxX1 = dValue; }
    if (this->bboxMinY->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.bboxY1 = dValue; }
    if (this->bboxMinZ->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.bboxZ1 = dValue; }

    if (this->bboxMaxX->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.bboxX2 = dValue; }
    if (this->bboxMaxY->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.bboxY2 = dValue; }
    if (this->bboxMaxZ->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.bboxZ2 = dValue; }

    selectedDepthConf.enableBBox=1;
   } else
   {
    selectedDepthConf.enableBBox=0;
   }


   if (CheckBoxAutoPlane3Point->IsChecked())        { selectedDepthConf.doNotGenerateNormalFrom3Points=0;  } else
                                                    { selectedDepthConf.doNotGenerateNormalFrom3Points=1;  }

   if (CheckBoxAutoPlaneSegmentation->IsChecked())  { selectedDepthConf.autoPlaneSegmentation=1;  } else
                                                    { selectedDepthConf.autoPlaneSegmentation=0;  }

   if (CheckBoxPlane->IsChecked())
   {
    if (this->planeP1X->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p1[0] = dValue; }
    if (this->planeP1Y->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p1[1] = dValue; }
    if (this->planeP1Z->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p1[2] = dValue; }

    if (this->planeP2X->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p2[0] = dValue; }
    if (this->planeP2Y->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p2[1] = dValue; }
    if (this->planeP2Z->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p2[2] = dValue; }

    if (this->planeP3X->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p3[0] = dValue; }
    if (this->planeP3Y->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p3[1] = dValue; }
    if (this->planeP3Z->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.p3[2] = dValue; }

    if (this->PlanePointX->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.center[0] = dValue; }
    if (this->PlanePointY->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.center[1] = dValue; }
    if (this->PlanePointZ->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.center[2] = dValue; }

    if (this->NormalX->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.normal[0] = dValue; }
    if (this->NormalY->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.normal[1] = dValue; }
    if (this->NormalZ->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.normal[2] = dValue; }

    if (this->planeNormalOffset->GetValue().ToDouble(&dValue)) {  this->selectedDepthConf.planeNormalOffset = dValue; }
    if (this->planeNormalSize->GetValue().ToDouble(&dValue))   {  this->selectedDepthConf.planeNormalSize = dValue; }

    this->selectedDepthConf.autoPlaneSegmentationMinimumDistancePoint = 830;
    this->selectedDepthConf.autoPlaneSegmentationMaximumDistancePoint = 3000;

    selectedDepthConf.enablePlaneSegmentation=1;
   } else
   {
    selectedDepthConf.enablePlaneSegmentation=0;
   }


  if (cropDepthX1->GetValue().ToLong(&value)) {  selectedDepthConf.minX = value; }
  if (cropDepthY1->GetValue().ToLong(&value)) {  selectedDepthConf.minY = value; }
  if (cropDepthX2->GetValue().ToLong(&value)) {  selectedDepthConf.maxX = value; }
  if (cropDepthY2->GetValue().ToLong(&value)) {  selectedDepthConf.maxY = value; }

  if (cropRGBX1->GetValue().ToLong(&value)) {  selectedRGBConf.minX = value; }
  if (cropRGBY1->GetValue().ToLong(&value)) {  selectedRGBConf.minY = value; }
  if (cropRGBX2->GetValue().ToLong(&value)) {  selectedRGBConf.maxX = value; }
  if (cropRGBY2->GetValue().ToLong(&value)) {  selectedRGBConf.maxY = value; }

  selectedDepthConf.minDepth = minDepth->GetValue();
  selectedDepthConf.maxDepth = maxDepth->GetValue();

  if ( CheckBoxInvertDepth->IsChecked() ) { this->selectedDepthConf.invert=1; } else
                                          { this->selectedDepthConf.invert=0; }

  if ( CheckBoxInvertRGB->IsChecked() ) { this->selectedRGBConf.invert=1;  } else
                                        { this->selectedRGBConf.invert=0;  }


  if ( CheckBoxErode->IsChecked() )  { this->selectedRGBConf.erode=1;   this->selectedDepthConf.erode=1;  } else
                                     { this->selectedRGBConf.erode=0;   this->selectedDepthConf.erode=0;  }
  if ( CheckBoxDilate->IsChecked() ) { this->selectedRGBConf.dilate=1;  this->selectedDepthConf.dilate=1; } else
                                     { this->selectedRGBConf.dilate=0;  this->selectedDepthConf.dilate=0; }



  selectedRGBConf.kernWidth=SpinCtrlKernWidth->GetValue();
  selectedDepthConf.kernWidth=SpinCtrlKernWidth->GetValue();
  selectedRGBConf.kernHeight=SpinCtrlKernHeight->GetValue();
  selectedDepthConf.kernHeight=SpinCtrlKernHeight->GetValue();

  selectedRGBConf.kernThreshold=SpinCtrlKernThreshold->GetValue();
  selectedDepthConf.kernThreshold=SpinCtrlKernThreshold->GetValue();


   if (CheckBoxSegmentMovement->IsChecked())
        {
          selectedDepthConf.enableDepthMotionDetection=1;
          if (TextCtrlMovementThreshold->GetValue().ToLong(&value))
              {  selectedDepthConf.motionDistanceThreshold = value; }
        } else
        {
          selectedDepthConf.enableDepthMotionDetection=0;
        }

   if (CheckBoxSegmentRGBMovement->IsChecked())
        {
            selectedRGBConf.enableRGBMotionDetection=1;
            selectedRGBConf.motionRThreshold = SpinCtrlMovementR->GetValue();
            selectedRGBConf.motionGThreshold = SpinCtrlMovementG->GetValue();
            selectedRGBConf.motionBThreshold = SpinCtrlMovementB->GetValue();
        } else
        {
            selectedRGBConf.enableRGBMotionDetection=0;
        }

   selectedRGBConf.minR = minR->GetValue();
   selectedRGBConf.minG = minG->GetValue();
   selectedRGBConf.minB = minB->GetValue();
   selectedRGBConf.maxR = maxR->GetValue();
   selectedRGBConf.maxG = maxG->GetValue();
   selectedRGBConf.maxB = maxB->GetValue();


   if (CheckBoxSegmentRGBMovement->IsChecked()) { selectedRGBConf.enableReplacingColors=1; } else
                                                { selectedRGBConf.enableReplacingColors=0; }

   selectedRGBConf.replaceR = replaceR->GetValue();
   selectedRGBConf.replaceG = replaceG->GetValue();
   selectedRGBConf.replaceB = replaceB->GetValue();

   selectedRGBConf.eraseColorR = eraseColorR->GetValue();
   selectedRGBConf.eraseColorG = eraseColorG->GetValue();
   selectedRGBConf.eraseColorB = eraseColorB->GetValue();




  selectedCombinationMode = ChoiceCombination->GetSelection();


  return 1;
}

void SelectSegmentation::OnButtonOkClick(wxCommandEvent& event)
{
    saveSegmentationValuesFromForm();
    Close();
}

void SelectSegmentation::OnButtonCancelClick(wxCommandEvent& event)
{
    Close();
}

void SelectSegmentation::OnButtonExportClick(wxCommandEvent& event)
{
   FileDialogExport->ShowModal();


    char cstring[2048];
    strncpy(cstring, (const char*) FileDialogExport->GetPath().mb_str(wxConvUTF8), 2047);


    if (! saveSegmentationDataToFile(cstring, &selectedRGBConf , &selectedDepthConf , selectedCombinationMode ) )
    {
        wxMessageBox(wxT("Could not write Segmentation to the file specified"),wxT("While trying to save segmentation.."));
    }

}
