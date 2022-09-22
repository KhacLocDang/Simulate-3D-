
// DoAnDHMTDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DoAnDHMT.h"
#include "DoAnDHMTDlg.h"
#include "afxdialogex.h"
/*
NHOM SV: DANG KHAC LOC

MSSV:17520694

*/

#include<Windows.h>
#include<iostream>
#include"include\GL\GLU.H"
#include"include\GL\GL.H"
#include"include\GL\glut.h"
#include <stdio.h>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CDoAnDHMTDlg dialog



CDoAnDHMTDlg::CDoAnDHMTDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DOANDHMT_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDoAnDHMTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT3, var_fovy);
	DDX_Control(pDX, IDC_SLIDER2, slider_fovy);

	DDX_Control(pDX, IDC_SLIDER4, slider_pnear);
	DDX_Control(pDX, IDC_EDIT5, var_pnear);
	DDX_Control(pDX, IDC_SLIDER5, slider_pfar);
	DDX_Control(pDX, IDC_EDIT6, var_pfar);
	DDX_Control(pDX, IDC_SLIDER6, slider_eyex);
	DDX_Control(pDX, IDC_EDIT7, var_eyex);
	DDX_Control(pDX, IDC_SLIDER7, slider_eyey);
	DDX_Control(pDX, IDC_EDIT8, var_eyey);
	DDX_Control(pDX, IDC_SLIDER8, slider_eyez);
	DDX_Control(pDX, IDC_EDIT9, var_eyez);
	DDX_Control(pDX, IDC_SLIDER9, slider_scalex);
	DDX_Control(pDX, IDC_EDIT10, var_scalex);
	DDX_Control(pDX, IDC_SLIDER10, slider_scaley);
	DDX_Control(pDX, IDC_EDIT11, var_scaley);
	DDX_Control(pDX, IDC_SLIDER11, slider_scalez);
	DDX_Control(pDX, IDC_EDIT12, var_scalez);
	DDX_Control(pDX, IDC_SLIDER12, slider_modelx);
	DDX_Control(pDX, IDC_EDIT13, var_modelx);
	DDX_Control(pDX, IDC_SLIDER17, slider_modely);
	DDX_Control(pDX, IDC_EDIT18, var_modely);
	DDX_Control(pDX, IDC_SLIDER13, slider_modelz);
	DDX_Control(pDX, IDC_EDIT14, var_modelz);
	DDX_Control(pDX, IDC_SLIDER15, slider_upx);
	DDX_Control(pDX, IDC_EDIT16, var_upx);
	DDX_Control(pDX, IDC_SLIDER14, slider_upy);
	DDX_Control(pDX, IDC_EDIT15, var_upy);
	DDX_Control(pDX, IDC_SLIDER16, slider_upz);
	DDX_Control(pDX, IDC_EDIT17, var_upz);
}

BEGIN_MESSAGE_MAP(CDoAnDHMTDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_RADIO1, &CDoAnDHMTDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDOK, &CDoAnDHMTDlg::OnBnClickedOk)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_RADIO2, &CDoAnDHMTDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CDoAnDHMTDlg::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_RADIO4, &CDoAnDHMTDlg::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO5, &CDoAnDHMTDlg::OnBnClickedRadio5)
	ON_BN_CLICKED(IDC_RADIO6, &CDoAnDHMTDlg::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_RADIO7, &CDoAnDHMTDlg::OnBnClickedRadio7)
	ON_BN_CLICKED(IDC_RADIO9, &CDoAnDHMTDlg::OnBnClickedRadio9)
	ON_BN_CLICKED(IDC_RADIO8, &CDoAnDHMTDlg::OnBnClickedRadio8)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER2, &CDoAnDHMTDlg::OnNMCustomdrawSlider2)
	ON_EN_CHANGE(IDC_EDIT3, &CDoAnDHMTDlg::OnEnChangeEdit3)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER4, &CDoAnDHMTDlg::OnNMCustomdrawSlider4)
	ON_EN_CHANGE(IDC_EDIT5, &CDoAnDHMTDlg::OnEnChangeEdit5)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER5, &CDoAnDHMTDlg::OnNMCustomdrawSlider5)
	ON_EN_CHANGE(IDC_EDIT6, &CDoAnDHMTDlg::OnEnChangeEdit6)
	ON_BN_CLICKED(IDC_BUTTON1, &CDoAnDHMTDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CDoAnDHMTDlg::OnBnClickedButton2)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER6, &CDoAnDHMTDlg::OnNMCustomdrawSlider6)
	ON_EN_CHANGE(IDC_EDIT7, &CDoAnDHMTDlg::OnEnChangeEdit7)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER7, &CDoAnDHMTDlg::OnNMCustomdrawSlider7)
	ON_EN_CHANGE(IDC_EDIT8, &CDoAnDHMTDlg::OnEnChangeEdit8)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER8, &CDoAnDHMTDlg::OnNMCustomdrawSlider8)
	ON_EN_CHANGE(IDC_EDIT9, &CDoAnDHMTDlg::OnEnChangeEdit9)
	ON_BN_CLICKED(IDC_RADIO10, &CDoAnDHMTDlg::OnBnClickedRadio10)
	ON_BN_CLICKED(IDC_RADIO13, &CDoAnDHMTDlg::OnBnClickedRadio13)
	ON_BN_CLICKED(IDC_RADIO12, &CDoAnDHMTDlg::OnBnClickedRadio12)
	ON_BN_CLICKED(IDC_RADIO14, &CDoAnDHMTDlg::OnBnClickedRadio14)
	ON_BN_CLICKED(IDC_RADIO11, &CDoAnDHMTDlg::OnBnClickedRadio11)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER9, &CDoAnDHMTDlg::OnNMCustomdrawSlider9)
	ON_EN_CHANGE(IDC_EDIT10, &CDoAnDHMTDlg::OnEnChangeEdit10)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER10, &CDoAnDHMTDlg::OnNMCustomdrawSlider10)
	ON_EN_CHANGE(IDC_EDIT11, &CDoAnDHMTDlg::OnEnChangeEdit11)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER11, &CDoAnDHMTDlg::OnNMCustomdrawSlider11)
	ON_EN_CHANGE(IDC_EDIT12, &CDoAnDHMTDlg::OnEnChangeEdit12)
	ON_BN_CLICKED(IDC_BUTTON4, &CDoAnDHMTDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &CDoAnDHMTDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CDoAnDHMTDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CDoAnDHMTDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_CHECK1, &CDoAnDHMTDlg::OnBnClickedCheck1)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER17, &CDoAnDHMTDlg::OnNMCustomdrawSlider17)
	ON_EN_CHANGE(IDC_EDIT16, &CDoAnDHMTDlg::OnEnChangeEdit16)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER12, &CDoAnDHMTDlg::OnNMCustomdrawSlider12)
	ON_EN_CHANGE(IDC_EDIT13, &CDoAnDHMTDlg::OnEnChangeEdit13)
	ON_EN_CHANGE(IDC_EDIT18, &CDoAnDHMTDlg::OnEnChangeEdit18)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER13, &CDoAnDHMTDlg::OnNMCustomdrawSlider13)
	ON_EN_CHANGE(IDC_EDIT14, &CDoAnDHMTDlg::OnEnChangeEdit14)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER15, &CDoAnDHMTDlg::OnNMCustomdrawSlider15)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER14, &CDoAnDHMTDlg::OnNMCustomdrawSlider14)
	ON_EN_CHANGE(IDC_EDIT15, &CDoAnDHMTDlg::OnEnChangeEdit15)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER16, &CDoAnDHMTDlg::OnNMCustomdrawSlider16)
	ON_EN_CHANGE(IDC_EDIT17, &CDoAnDHMTDlg::OnEnChangeEdit17)
	ON_BN_CLICKED(IDC_RADIO15, &CDoAnDHMTDlg::OnBnClickedRadio15)
	ON_BN_CLICKED(IDC_RADIO16, &CDoAnDHMTDlg::OnBnClickedRadio16)
END_MESSAGE_MAP()


// CDoAnDHMTDlg message handlers
BOOL CDoAnDHMTDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
		
	}
	
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	this->MoveWindow(0, 0, glutGet(GLUT_SCREEN_WIDTH) / 2 +5, glutGet(GLUT_SCREEN_HEIGHT));
	
	
	var_fovy.SetWindowTextW(_T("90"));
	slider_fovy.SetRange(0, 360, TRUE);
	slider_fovy.SetPos(90);
		
	var_pnear.SetWindowTextW(_T("100"));
	slider_pnear.SetRange(0,400, TRUE);
	slider_pnear.SetPos(100);

	var_pfar.SetWindowTextW(_T("500"));
	slider_pfar.SetRange(0, 3000, TRUE);
	slider_pfar.SetPos(500);
	


	
	slider_eyex.SetRange(-1000.0, 1000.0, TRUE);
	slider_eyex.SetPos(0.0);

	
	slider_eyey.SetRange(-1000.0, 1000.0, TRUE);
	slider_eyey.SetPos(0.0);

	
	slider_eyez.SetRange(-1000.0, 1000.0, TRUE);
	slider_eyez.SetPos(200.0);

	slider_scalex.SetRange(1.0, 10.0, TRUE);
	slider_scalex.SetPos(1.0);

	slider_scaley.SetRange(1.0, 10.0, TRUE);
	slider_scaley.SetPos(1.0);

	slider_scalez.SetRange(1.0, 10.0, TRUE);
	slider_scalez.SetPos(1.0);

	
	slider_modelx.SetRange(-200.0, 200.0, TRUE);
	slider_modelx.SetPos(0.0);

	slider_modely.SetRange(-200.0, 200.0, TRUE);
	slider_modely.SetPos(0.0);

	slider_modelz.SetRange(-200.0, 200.0, TRUE);
	slider_modelz.SetPos(0.0);


	slider_upx.SetRange(0.0, 1.0, TRUE);
	slider_upx.SetPos(0.0);

	slider_upy.SetRange(0.0, 1.0, TRUE);
	slider_upy.SetPos(1.0);

	slider_upz.SetRange(0.0, 1.0, TRUE);
	slider_upz.SetPos(0.0);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDoAnDHMTDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDoAnDHMTDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDoAnDHMTDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CDoAnDHMTDlg::OnSize(UINT nType, int cx, int cy)
{
	CDialogEx::OnSize(nType, cx, cy);
	// TODO: Add your message handler code here
	
}

//Code lõi các nút

bool chooseTeapot = 0;
bool chooseCube = 0;
bool chooseSphere = 0;
bool chooseCone = 0;
bool chooseTorus = 0;
bool chooseOctahedron = 0;
bool solid = 0;
bool line = 0;
bool point = 0;


int size = 0;
bool end_draw = false;
int x_begin = 0;
int y_begin = 0;
int x_end = 0;
int y_end = 0;
int size_model = 0;
int x2 = 0;
int y2 = 0;
int flag = 1;

int const_size_model = 0;
int const_x = 100000;
int const_y = 100000;
bool flagtt = 0;

bool perspective = 0;
float ratio = 0;
int w, h;

int fovy = 0;
int pnear = 0;
int pfar = 0;

GLdouble  eyex = 0;
GLdouble  eyey = 0;
GLdouble  eyez = 200;

GLdouble modelx = 0;
GLdouble  modely = 0;
GLdouble  modelz = 0;

GLdouble  upx = 0;
GLdouble  upy = 1;
GLdouble  upz = 0;


GLfloat scalex = 1.0;
GLfloat scaley = 1.0;
GLfloat scalez = 1.0;

bool translate = 0;
bool  isrotatingox= 0;// de bien rotate no bao loi
bool  isrotatingoy = 0;
bool  isrotatingoz = 0;
bool scale = 0;

//các thao tác xử lý chuột 

GLfloat spin = 0;
double lightoz = 0;
double lightox = 0;
double lightoy = 0;
bool fulllight = false;

//animation
bool autorolate = 0;
bool autotranslate = 0;

void CDoAnDHMTDlg::OnBnClickedRadio1()
{
	chooseTeapot = 1;
	chooseCube = 0;
	chooseSphere = 0;
	chooseCone = 0;
	chooseTorus = 0;
	chooseOctahedron = 0;
}
void CDoAnDHMTDlg::OnBnClickedRadio2()
{
	chooseTeapot = 0;
	chooseCube = 1;
	chooseSphere = 0;
	chooseCone = 0;
	chooseTorus = 0;
	chooseOctahedron = 0;
}

void CDoAnDHMTDlg::OnBnClickedRadio3()
{
	chooseTeapot = 0;
	chooseCube = 0;
	chooseSphere = 1;
	chooseCone = 0;
	chooseTorus = 0;
	chooseOctahedron = 0;
}


void CDoAnDHMTDlg::OnBnClickedRadio4()
{
	chooseTeapot = 0;
	chooseCube = 0;
	chooseSphere = 0;
	chooseCone = 1;
	chooseTorus = 0;
	chooseOctahedron = 0;
}


void CDoAnDHMTDlg::OnBnClickedRadio5()
{
	chooseTeapot = 0;
	chooseCube = 0;
	chooseSphere = 0;
	chooseCone = 0;
	chooseTorus = 1;
	chooseOctahedron = 0;
}


void CDoAnDHMTDlg::OnBnClickedRadio7()
{
	solid = 1;
	line = 0;
	point = 0;
	
}
void CDoAnDHMTDlg::OnBnClickedRadio8()
{
	solid = 0;
	line = 1;
	point = 0;
}

void CDoAnDHMTDlg::OnBnClickedRadio9()
{
	solid = 0;
	line = 0;
	point = 1;
}

void CDoAnDHMTDlg::OnEnChangeEdit3()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here

	CString currentVal;
	var_fovy.GetWindowTextW(currentVal);
	fovy = _tstof(currentVal);

}



void CDoAnDHMTDlg::OnEnChangeEdit5()
{

	CString currentVal;
	var_pnear.GetWindowTextW(currentVal);
	pnear = _tstof(currentVal);
}

void CDoAnDHMTDlg::OnEnChangeEdit6()
{

	CString currentVal;
	var_pfar.GetWindowTextW(currentVal);
	pfar = _tstof(currentVal);
}

void CDoAnDHMTDlg::OnEnChangeEdit7()
{

	CString currentVal;
	var_eyex.GetWindowTextW(currentVal);
	eyex = _tstof(currentVal);
}

void CDoAnDHMTDlg::OnEnChangeEdit8()
{
	CString currentVal;
	var_eyey.GetWindowTextW(currentVal);
	eyey = _tstof(currentVal);
}

void CDoAnDHMTDlg::OnEnChangeEdit9()
{
	CString currentVal;
	var_eyez.GetWindowTextW(currentVal);
	eyez = _tstof(currentVal);
}

void CDoAnDHMTDlg::OnEnChangeEdit10()
{
	CString currentVal;
	var_scalex.GetWindowTextW(currentVal);
	scalex = _tstof(currentVal);
}


void CDoAnDHMTDlg::OnEnChangeEdit11()
{
	CString currentVal;
	var_scaley.GetWindowTextW(currentVal);
	scaley = _tstof(currentVal);

}

void CDoAnDHMTDlg::OnEnChangeEdit12()
{
	CString currentVal;
	var_scalez.GetWindowTextW(currentVal);
	scalez = _tstof(currentVal);
}
void CDoAnDHMTDlg::OnEnChangeEdit13()
{
	CString currentVal;
	var_modelx.GetWindowTextW(currentVal);
	modelx = _tstof(currentVal);
}
void CDoAnDHMTDlg::OnEnChangeEdit18()
{
	CString currentVal;
	var_modely.GetWindowTextW(currentVal);
	modely = _tstof(currentVal);
}
void CDoAnDHMTDlg::OnEnChangeEdit14()
{
	CString currentVal;
	var_modelz.GetWindowTextW(currentVal);
	modelz = _tstof(currentVal);
}

void CDoAnDHMTDlg::OnEnChangeEdit16()
{
	CString currentVal;
	var_upx.GetWindowTextW(currentVal);
	upx = _tstof(currentVal);
}
void CDoAnDHMTDlg::OnEnChangeEdit15()
{
	CString currentVal;
	var_upy.GetWindowTextW(currentVal);
	upy = _tstof(currentVal);
}

void CDoAnDHMTDlg::OnEnChangeEdit17()
{
	CString currentVal;
	var_upz.GetWindowTextW(currentVal);
	upz = _tstof(currentVal);
}


void CDoAnDHMTDlg::OnNMCustomdrawSlider2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	fovy = slider_fovy.GetPos();
	CString strVal;
	strVal.Format(_T("%d"), fovy);
	var_fovy.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider4(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	pnear = slider_pnear.GetPos();

	CString strVal;
	strVal.Format(_T("%d"), pnear);
	var_pnear.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider5(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	
	pfar = slider_pfar.GetPos();

	CString strVal;
	strVal.Format(_T("%d"), pfar);
	var_pfar.SetWindowTextW(strVal);
}



void CDoAnDHMTDlg::OnNMCustomdrawSlider6(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;

	eyex = (GLdouble)slider_eyex.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), eyex);
	var_eyex.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider7(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	eyey = (GLdouble)slider_eyey.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), eyey);
	var_eyey.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider8(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	eyez = (GLdouble)slider_eyez.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), eyez);
	var_eyez.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider9(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	 scalex= (GLfloat)slider_scalex.GetPos();

	CString strVal;
	strVal.Format(_T("%f"), (float)scalex);
	var_scalex.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider10(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	scaley = (GLfloat)slider_scaley.GetPos();

	CString strVal;
	strVal.Format(_T("%f"), (float)scaley);
	var_scaley.SetWindowTextW(strVal);
}


void CDoAnDHMTDlg::OnNMCustomdrawSlider11(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	scalez = (GLfloat)slider_scalez.GetPos();

	CString strVal;
	strVal.Format(_T("%f"), (float)scalez);
	var_scalez.SetWindowTextW(strVal);
}




void CDoAnDHMTDlg::OnNMCustomdrawSlider12(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	 modelx= (GLdouble)slider_modelx.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), modelx);
	var_modelx.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider17(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	modely = (GLdouble)slider_modely.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), modely);
	var_modely.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider13(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	modelz = (GLdouble)slider_modelz.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), modelz);
	var_modelz.SetWindowTextW(strVal);
}


void CDoAnDHMTDlg::OnNMCustomdrawSlider15(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	upx = (GLdouble)slider_upx.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), upx);
	var_upx.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider14(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	upy = (GLdouble)slider_upy.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), upy);
	var_upy.SetWindowTextW(strVal);
}

void CDoAnDHMTDlg::OnNMCustomdrawSlider16(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: Add your control notification handler code here
	*pResult = 0;
	upz = (GLdouble)slider_upz.GetPos();

	CString strVal;
	strVal.Format(_T("%lf"), upz);
	var_upz.SetWindowTextW(strVal);
}




void CDoAnDHMTDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	perspective = 1;
}
void CDoAnDHMTDlg::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
	perspective = 0;
}



//nut tt
void CDoAnDHMTDlg::OnBnClickedRadio14()
{
	if (isrotatingoy == 1 || isrotatingoz == 1 || isrotatingox == 1 )
	{
		flagtt = 1;
	}
	else
	{
		flagtt = 0;
		const_size_model = size_model;
	}
	translate = 1;
	scale = 0;	
	isrotatingox = 0;
	isrotatingoy = 0;
	isrotatingoz = 0;
	perspective = 0;
	eyex = 0.0;
	eyey = 0.0;
	eyez = 200.0;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
}
//nut xoay
void CDoAnDHMTDlg::OnBnClickedRadio10()
{
	if (isrotatingoy != 1 && isrotatingoz != 1)
	{
		const_x = x_begin;
		const_y = y_begin;
	}
		
	translate = 0;
	scale = 0;

	isrotatingox = 1;
	isrotatingoy = 0;
	isrotatingoz = 0;
	perspective = 0;
	if(const_size_model==0)
		const_size_model = size_model;
	spin = 0;

	eyex = 0.0;
	eyey = 0.0;
	eyez = 200.0;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
}


void CDoAnDHMTDlg::OnBnClickedRadio11()
{
	if (isrotatingox != 1 && isrotatingoz != 1)
	{
		const_x = x_begin;
		const_y = y_begin;
	}
	translate = 0;
	scale = 0;
	isrotatingox = 0;
	isrotatingoy = 1;
	isrotatingoz = 0;
	perspective = 0;
	if (const_size_model == 0)
		const_size_model = size_model;

	spin = 0;
	eyex = 0.0;
	eyey = 0.0;
	eyez = 200.0;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
}


void CDoAnDHMTDlg::OnBnClickedRadio12()
{
	if (isrotatingox != 1 && isrotatingoy != 1)
	{
		const_x = x_begin;
		const_y = y_begin;
	}
	translate = 0;
	scale = 0;
	isrotatingox = 0;
	isrotatingoy = 0;
	isrotatingoz = 1;
	perspective = 0;
	if (const_size_model == 0)
		const_size_model = size_model;

	spin = 0;
	
	eyex = 0.0;
	eyey = 0.0;
	eyez = 200.0;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
}


//reset nut xoa tat ca
void CDoAnDHMTDlg::OnBnClickedRadio13()
{
	translate = 0;
	scale = 0;
	isrotatingoy = 0;
	isrotatingoz = 0;
	isrotatingox = 0;
	perspective = 0;
	const_x = 0;
	const_y = 0;
	const_size_model=0;
	spin = 0;
	fovy = 0;
	pnear = 0;
	pfar = 0;
	eyex = 0;
	eyey = 0;
	eyez = 200;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
	flag = 0;
	scalex = 1.0;
	scaley = 1.0;
	scalez = 1.0;
}
//autoxoay
void CDoAnDHMTDlg::OnBnClickedRadio6()
{

	if (!(isrotatingoy == 1 || isrotatingoz == 1 || isrotatingox == 1|| translate==1))
	{
		const_size_model = size_model;
	}
	autorolate = 1;
	autotranslate = 0;

	translate = 0;
	isrotatingoy = 0;
	isrotatingoz = 0;
	isrotatingox = 0;
	perspective = 0;
	spin = 0;
	fovy = 0;
	pnear = 0;
	pfar = 0;
	eyex = 0;
	eyey = 0;
	eyez = 200;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
	flag = 0;
	scalex = 1.0;
	scaley = 1.0;
	scalez = 1.0;
}
//autott
int autott_x = 0;
int autott_y = 0;
void CDoAnDHMTDlg::OnBnClickedRadio15()
{

	if (!(isrotatingoy == 1 || isrotatingoz == 1 || isrotatingox == 1 || translate == 1))
	{
		const_size_model = size_model;
	}
	autotranslate = 1;
	autorolate = 0;
	
	translate = 0;
	isrotatingoy = 0;
	isrotatingoz = 0;
	isrotatingox = 0;
	perspective = 0;
	spin = 0;
	autott_x = -glutGet(GLUT_WINDOW_WIDTH) / 2 + 100;
	autott_y = glutGet(GLUT_WINDOW_HEIGHT) / 2 -200;
	fovy = 0;
	pnear = 0;
	pfar = 0;
	eyex = 0;
	eyey = 0;
	eyez = 200;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
	flag = 0;
	scalex = 1.0;
	scaley = 1.0;
	scalez = 1.0;

}
// nut mix
void CDoAnDHMTDlg::OnBnClickedRadio16()
{
	if (!(isrotatingoy == 1 || isrotatingoz == 1 || isrotatingox == 1 || translate == 1))
	{
		const_size_model = size_model;
	}
	autotranslate = 1;
	autorolate = 1;

	translate = 0;
	isrotatingoy = 0;
	isrotatingoz = 0;
	isrotatingox = 0;
	perspective = 0;
	spin = 0;
	autott_x = -glutGet(GLUT_WINDOW_WIDTH) / 2 + 100;
	autott_y = glutGet(GLUT_WINDOW_HEIGHT) / 2 - 200;
	fovy = 0;
	pnear = 0;
	pfar = 0;
	eyex = 0;
	eyey = 0;
	eyez = 200;
	modelx = 0.0;
	modely = 0.0;
	modelz = 0.0;
	upx = 0.0;
	upy = 1.0;
	upz = 0.0;
	flag = 0;
	scalex = 1.0;
	scaley = 1.0;
	scalez = 1.0;
}


void CDoAnDHMTDlg::OnBnClickedButton4()
{
	lightoz = 1.0;
	lightoy = 0.0;
	lightox = 0.0;
}
void CDoAnDHMTDlg::OnBnClickedButton6()
{
	lightoz = 0.0;
	lightoy = 1.0;
	lightox = 0.0;
}


void CDoAnDHMTDlg::OnBnClickedButton7()
{
	lightoz = 0.0;
	lightoy = 0.0;
	lightox = 1.0;
}

void CDoAnDHMTDlg::OnBnClickedButton8()
{
	fulllight = true;
}
void CDoAnDHMTDlg::OnBnClickedCheck1()
{
	lightoz = 0.0;
	lightoy = 0.0;
	lightox = 0.0;
	fulllight = false;
}



//Code do hoa
void Init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glDisable(GL_LIGHTING);
	if (lightox == 1.0 || lightoy == 1.0 || lightoz == 1.0)
	{
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glEnable(GL_DEPTH_TEST);

		GLfloat light_pos[] = { lightox, lightoy,lightoz, 0.0 };
		glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
		if (fulllight == true)
		{
			GLfloat ambient[] = { 1.0, 1.0, 1.0, 1.0 };
			glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);

			GLfloat diff_use[] = { 0.7, 0.7, 0.7, 1.0 };
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);

			GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
			glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);

			GLfloat shininess = 50.0f;
			glMateriali(GL_FRONT, GL_SHININESS, shininess);
		}
		else {
			GLfloat ambient[] = { 0.2, 0.2, 0.2, 1.0};
			glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);

			GLfloat diff_use[] = { 0.8, 0.8, 0.8, 1.0 };
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);

			GLfloat specular[] = { 0.0, 0.0, 0.0,0.1 };
			glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
			
			GLfloat shininess = 0.0f;
			glMateriali(GL_FRONT, GL_SHININESS, shininess);
		}
	}
}

void ReShape(int width, int height)
{
	if (height == 0)
	{
		height = 1;
	}
	glViewport(0, 0, width, height);
	w = width;
	h = height;
	ratio = (float)width / (float)height;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	if (perspective == 1)
	{
		gluPerspective(fovy, ratio, pnear, pfar);
	}
	else
	{
		glOrtho(-glutGet(GLUT_SCREEN_WIDTH) / 4, glutGet(GLUT_SCREEN_WIDTH) / 4,
			-glutGet(GLUT_SCREEN_WIDTH) / 4, glutGet(GLUT_SCREEN_WIDTH) / 4,
			-glutGet(GLUT_SCREEN_WIDTH) / 4, glutGet(GLUT_SCREEN_WIDTH) / 4);
	}

	glMatrixMode(GL_MODELVIEW);
}

//các thao tác xử lý chuột 
int statemouse;
void mouseButton(int button, int state, int x, int y)
{

	statemouse = state;
		// only start motion if the left button is pressed
		if (button == GLUT_LEFT_BUTTON)
		{
			// when the button is released
			if (state == GLUT_UP)
			{

				x_end = -(glutGet(GLUT_WINDOW_WIDTH) / 2 - x);
				y_end = (glutGet(GLUT_WINDOW_HEIGHT) / 2 - y);
				end_draw = false;

			}
			else
			{
				// (isrotatingox == 1 || isrotatingoy == 1 || isrotatingoz == 1)
					//dachonquay = 1;
				flag = 0;
				x_begin = -(glutGet(GLUT_WINDOW_WIDTH) / 2 - x);
				y_begin = (glutGet(GLUT_WINDOW_HEIGHT) / 2 - y);
				end_draw = true;
			}
		}

	
}

//Hàm sd khi di chuyển chuột trong cửa sổ
//tham số x, y là tọa độ chuột trong cửa sổ
void mouseMove(int x, int y)
{

	if (end_draw)
	{
		x_end = -(glutGet(GLUT_WINDOW_WIDTH) / 2 - x);
		y_end = (glutGet(GLUT_WINDOW_HEIGHT) / 2 - y);
		if (abs(x_end - x_begin) != 0)
		{
			size_model = abs(x_end - x_begin);
			flag = 1;
		}
		if (isrotatingox == 1 )
			spin = ((-y_end + y_begin) * 360) / glutGet(GLUT_WINDOW_WIDTH);
		if (isrotatingoy == 1)
			spin = ((x_end - x_begin) * 360) / glutGet(GLUT_WINDOW_WIDTH);
		if (isrotatingoz == 1)
			spin = ((x_end - x_begin) * 360) / glutGet(GLUT_WINDOW_WIDTH);
	}

}


void DrawCoordinate()
{

	glDisable(GL_LIGHTING);
	
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-glutGet(GLUT_WINDOW_WIDTH) * 5, 0.0, 0.0);
	glVertex3f(glutGet(GLUT_WINDOW_WIDTH) * 5, 0.0, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, -glutGet(GLUT_WINDOW_HEIGHT) * 5, 0.0);
	glVertex3f(0.0, glutGet(GLUT_WINDOW_HEIGHT) * 5, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(0.0, 0.0, -glutGet(GLUT_WINDOW_WIDTH) * 5);
	glVertex3f(0.0, 0.0, glutGet(GLUT_WINDOW_WIDTH) * 5);
	glEnd();
	if (lightox == 1.0 || lightoy == 1.0 || lightoz == 1.0)
	{
		glEnable(GL_LIGHTING);
	}
}

void RenderScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(eyex, eyey, eyez, modelx, modely, modelz, upx, upy, upz);
	Init();
	DrawCoordinate();
		if (perspective == 1)
		{
		
			glViewport(0, 0, w, h);
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			gluPerspective(fovy, ratio, pnear, pfar);

			glMatrixMode(GL_MODELVIEW);
		}
		else
		{
			
			glViewport(0, 0, w, h);
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			glOrtho(-glutGet(GLUT_SCREEN_WIDTH) / 4, glutGet(GLUT_SCREEN_WIDTH) / 4,
				-glutGet(GLUT_SCREEN_WIDTH) / 4, glutGet(GLUT_SCREEN_WIDTH) / 4,
				-glutGet(GLUT_SCREEN_WIDTH) / 4, glutGet(GLUT_SCREEN_WIDTH) / 4);
			glMatrixMode(GL_MODELVIEW);
		}
		
		/*glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex3f(-400.0f, -100.0f, -400.0f);
		glVertex3f(-400.0f, -100.0f, 400.0f);
		glVertex3f(400.0f, -100.0f, 400.0f);
		glVertex3f(400.0f, -100.0f, -400.0f);
		glEnd();*/

		if (chooseTeapot == 1)
		{
			glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

			if (translate == 1)
			{
				if (flagtt == 1)
				{
					glTranslatef(const_x, const_y, 0.0);
					if (statemouse != GLUT_UP)
						flagtt = 0;
				}
				else
				{
					glTranslatef(x_begin, y_begin, 0.0);

				}
				glScalef(scalex, scaley, scalez);
				glColor3f(1.0, 1.0, 1.0);
				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
				glutSolidTeapot(const_size_model);
				
			}
			else
				if (isrotatingox == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidTeapot(const_size_model);

				}
			else
				if (isrotatingoy == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidTeapot(const_size_model);

				}
			else
				if (isrotatingoz == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 0.0, 0.0, 1.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidTeapot(const_size_model);

				}
			else
			if (flag == 1)
			{
				glTranslatef(x_begin, y_begin, 0.0);
				glScalef (scalex, scaley, scalez);
				
				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
				glColor3f(1.0, 1.0, 1.0);
				glutSolidTeapot(size_model);	
			}
			glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau
		
		}

		if (chooseCube == 1)
		{
			glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

			if (translate == 1)
			{
				if (flagtt == 1)
				{
					glTranslatef(const_x, const_y, 0.0);
					if (statemouse != GLUT_UP)
						flagtt = 0;
				}
				else
				{
					glTranslatef(x_begin, y_begin, 0.0);

				}
				glScalef(scalex, scaley, scalez);
				glColor3f(1.0, 1.0, 1.0);
				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
				glutSolidCube(const_size_model);
				
			}
			else
				if (isrotatingox == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidCube(const_size_model);

				}
			else
				if (isrotatingoy == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidCube(const_size_model);

				}
			else
				if (isrotatingoz == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 0.0, 0.0, 1.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidCube(const_size_model);

				}
			else
			if (flag == 1)
			{
				glTranslatef(x_begin, y_begin, 0.0);
				glScalef(scalex, scaley, scalez);
				glColor3f(1.0, 1.0, 1.0);
				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

				glutSolidCube(size_model);
			}
			glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau

		}

		if (chooseSphere == 1)
		{

			glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

			if (translate == 1)
			{
				if (flagtt == 1)
				{
					glTranslatef(const_x, const_y, 0.0);
					if (statemouse != GLUT_UP)
						flagtt = 0;
				}
				else
				{
					glTranslatef(x_begin, y_begin, 0.0);

				}
				glScalef(scalex, scaley, scalez);
				glColor3f(1.0, 1.0, 1.0);
				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
				glutSolidSphere(const_size_model, 100, 100);

			}
			else
				if (isrotatingox == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidSphere(const_size_model, 100, 100);

				}
				else
					if (isrotatingoy == 1) {
						glTranslatef(const_x, const_y, 0.0);
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
						glScalef(scalex, scaley, scalez);
						glColor3f(1.0, 1.0, 1.0);
						if (solid == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
						if (line == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
						if (point == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
						glutSolidSphere(const_size_model, 100, 100);

					}
					else
						if (isrotatingoz == 1) {
							glTranslatef(const_x, const_y, 0.0);
							glRotatef((GLfloat)spin, 0.0, 0.0, 1.0);
							glScalef(scalex, scaley, scalez);
							glColor3f(1.0, 1.0, 1.0);
							if (solid == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
							if (line == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
							if (point == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
							glutSolidSphere(const_size_model, 100, 100);

						}
						else
							if (flag == 1)
							{
								glTranslatef(x_begin, y_begin, 0.0);
								glScalef(scalex, scaley, scalez);
								glColor3f(1.0, 1.0, 1.0);
								if (solid == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
								if (line == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
								if (point == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

								glutSolidSphere(size_model, 100, 100);
							}
			glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau

		}

		if (chooseCone == 1)
		{

			glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

			if (translate == 1)
			{
				if (flagtt == 1)
				{
					glTranslatef(const_x, const_y, 0.0);
					if (statemouse != GLUT_UP)
						flagtt = 0;
				}
				else
				{
					glTranslatef(x_begin, y_begin, 0.0);

				}
				glScalef(scalex, scaley, scalez);
				glColor3f(1.0, 1.0, 1.0);
				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
				glutSolidCone(const_size_model, const_size_model * 2, 100, 100);

			}
			else
				if (isrotatingox == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidCone(const_size_model, const_size_model * 2, 100, 100);

				}
				else
					if (isrotatingoy == 1) {
						glTranslatef(const_x, const_y, 0.0);
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
						glScalef(scalex, scaley, scalez);
						glColor3f(1.0, 1.0, 1.0);
						if (solid == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
						if (line == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
						if (point == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
						glutSolidCone(const_size_model, const_size_model * 2, 100, 100);

					}
					else
						if (isrotatingoz == 1) {
							glTranslatef(const_x, const_y, 0.0);
							glRotatef((GLfloat)spin, 0.0, 0.0, 1.0);
							glScalef(scalex, scaley, scalez);
							glColor3f(1.0, 1.0, 1.0);
							if (solid == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
							if (line == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
							if (point == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
							glutSolidCone(const_size_model, const_size_model * 2, 100, 100);

						}
						else
							if (flag == 1)
							{
								glTranslatef(x_begin, y_begin, 0.0);
								glScalef(scalex, scaley, scalez);
								glColor3f(1.0, 1.0, 1.0);
								if (solid == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
								if (line == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
								if (point == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

								glutSolidCone(size_model, size_model * 2, 100, 100);
							}
			glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau

		}

		if (chooseTorus == 1)
		{
			glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

			if (translate == 1)
			{
				if (flagtt == 1)
				{
					glTranslatef(const_x, const_y, 0.0);
					if (statemouse != GLUT_UP)
						flagtt = 0;
				}
				else
				{
					glTranslatef(x_begin, y_begin, 0.0);

				}
				glScalef(scalex, scaley, scalez);
				glColor3f(1.0, 1.0, 1.0);
				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
				glutSolidTorus(const_size_model*0.4, const_size_model, 100, 100);

			}
			else
				if (isrotatingox == 1) {
					glTranslatef(const_x, const_y, 0.0);
					glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					glScalef(scalex, scaley, scalez);
					glColor3f(1.0, 1.0, 1.0);
					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
					glutSolidTorus(const_size_model*0.4, const_size_model, 100, 100);

				}
				else
					if (isrotatingoy == 1) {
						glTranslatef(const_x, const_y, 0.0);
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
						glScalef(scalex, scaley, scalez);
						glColor3f(1.0, 1.0, 1.0);
						if (solid == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
						if (line == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
						if (point == 1)
							glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
						glutSolidTorus(const_size_model*0.4, const_size_model, 100, 100);

					}
					else
						if (isrotatingoz == 1) {
							glTranslatef(const_x, const_y, 0.0);
							glRotatef((GLfloat)spin, 0.0, 0.0, 1.0);
							glScalef(scalex, scaley, scalez);
							glColor3f(1.0, 1.0, 1.0);
							if (solid == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
							if (line == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
							if (point == 1)
								glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);
							glutSolidTorus(const_size_model*0.4, const_size_model, 100, 100);

						}
						else
							if (flag == 1)
							{
								glTranslatef(x_begin, y_begin, 0.0);
								glScalef(scalex, scaley, scalez);
								glColor3f(1.0, 1.0, 1.0);
								if (solid == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
								if (line == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
								if (point == 1)
									glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

								glutSolidTorus(size_model*0.4, size_model, 100, 100);
							}
			glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau

		}
		//Animation autorolate
		if (autorolate == 1|| autotranslate == 1) {


			if (chooseTorus == 1)
			{
				glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

				if (autotranslate == 1) 
				{
					glTranslatef(autott_x, autott_y, 0.0);
					if  ((autott_x< ((glutGet(GLUT_WINDOW_WIDTH) / 2) -100) )
						&& autott_y>0)
						autott_x += 1;
					else {
						if ((autott_y > -glutGet(GLUT_WINDOW_HEIGHT) / 2 + 200)&&
							autott_x>0)
							autott_y -= 1;
						else {
							if (autott_x > -glutGet(GLUT_WINDOW_WIDTH) / 2 + 100) 
								autott_x -= 1;
							else if(autott_y < glutGet(GLUT_WINDOW_HEIGHT) / 2-200 )
								autott_y += 1;
						}
						
					}

				}
				else {
					glTranslatef(0.0, 0.0, 0.0);
				}
				if (autorolate == 1) {
					spin = spin + 0.8; /* xoay thêm số deg cho mỗi lần lặp */
					if (spin > 360.0)
						spin = spin - 360.0;
					if (spin > 180.0&&spin < 360.0)
						glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					else
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
				}
					glScalef(1.0, 1.0, 1.0);
					glColor3f(1.0, 1.0, 1.0);


					if (solid == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
					if (line == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
					if (point == 1)
						glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

					glutSolidTorus(const_size_model*0.4, const_size_model, 100, 100);
				
				glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau
			}

			if (chooseTeapot == 1)
			{
				glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

				if (autotranslate == 1 ) {
					glTranslatef(autott_x, autott_y, 0.0);
					if ((autott_x< ((glutGet(GLUT_WINDOW_WIDTH) / 2) - 100))
						&& autott_y>0)
						autott_x += 1;
					else {
						if ((autott_y > -glutGet(GLUT_WINDOW_HEIGHT) / 2 + 200) &&
							autott_x>0)
							autott_y -= 1;
						else {
							if (autott_x > -glutGet(GLUT_WINDOW_WIDTH) / 2 + 100)
								autott_x -= 1;
							else if (autott_y < glutGet(GLUT_WINDOW_HEIGHT) / 2 - 200)
								autott_y += 1;
						}

					}

				}
				else {
					glTranslatef(0.0, 0.0, 0.0);
				}
				if (autorolate == 1 ) {
					spin = spin + 0.8; /* xoay thêm số deg cho mỗi lần lặp */
					if (spin > 360.0)
						spin = spin - 360.0;
					if (spin > 180.0&&spin < 360.0)
						glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					else
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
				}
				glScalef(1.0, 1.0, 1.0);
				glColor3f(1.0, 1.0, 1.0);


				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

				glutSolidTeapot(const_size_model);

				glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau
			}

			if (chooseCube == 1)
			{
				glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

				if (autotranslate == 1 ) {
					glTranslatef(autott_x, autott_y, 0.0);
					if ((autott_x< ((glutGet(GLUT_WINDOW_WIDTH) / 2) - 100))
						&& autott_y>0)
						autott_x += 1;
					else {
						if ((autott_y > -glutGet(GLUT_WINDOW_HEIGHT) / 2 + 200) &&
							autott_x>0)
							autott_y -= 1;
						else {
							if (autott_x > -glutGet(GLUT_WINDOW_WIDTH) / 2 + 100)
								autott_x -= 1;
							else if (autott_y < glutGet(GLUT_WINDOW_HEIGHT) / 2 - 200)
								autott_y += 1;
						}

					}

				}
				else {
					glTranslatef(0.0, 0.0, 0.0);
				}
				if (autorolate == 1 ) {
					spin = spin + 0.8; /* xoay thêm số deg cho mỗi lần lặp */
					if (spin > 360.0)
						spin = spin - 360.0;
					if (spin > 180.0&&spin < 360.0)
						glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					else
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
				}
				glScalef(1.0, 1.0, 1.0);
				glColor3f(1.0, 1.0, 1.0);


				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

				glutSolidCube(const_size_model);

				glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau
			}

			if (chooseSphere == 1)
			{
				glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

				if (autotranslate == 1 ) {
					glTranslatef(autott_x, autott_y, 0.0);
					if ((autott_x< ((glutGet(GLUT_WINDOW_WIDTH) / 2) - 100))
						&& autott_y>0)
						autott_x += 1;
					else {
						if ((autott_y > -glutGet(GLUT_WINDOW_HEIGHT) / 2 + 200) &&
							autott_x>0)
							autott_y -= 1;
						else {
							if (autott_x > -glutGet(GLUT_WINDOW_WIDTH) / 2 + 100)
								autott_x -= 1;
							else if (autott_y < glutGet(GLUT_WINDOW_HEIGHT) / 2 - 200)
								autott_y += 1;
						}

					}

				}
				else {
					glTranslatef(0.0, 0.0, 0.0);
				}
				if (autorolate == 1 ) {
					spin = spin + 0.8; /* xoay thêm số deg cho mỗi lần lặp */
					if (spin > 360.0)
						spin = spin - 360.0;
					if (spin > 180.0&&spin < 360.0)
						glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					else
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
				}
				glScalef(1.0, 1.0, 1.0);
				glColor3f(1.0, 1.0, 1.0);


				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

				glutSolidSphere(const_size_model, 100, 100);

				glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau
			}
			if (chooseCone == 1)
			{
				glPushMatrix();//Cất hệ tọa độ hiện tại vào stack

				if (autotranslate == 1) {
					glTranslatef(autott_x, autott_y, 0.0);
					if ((autott_x< ((glutGet(GLUT_WINDOW_WIDTH) / 2) - 100))
						&& autott_y>0)
						autott_x += 1;
					else {
						if ((autott_y > -glutGet(GLUT_WINDOW_HEIGHT) / 2 + 200) &&
							autott_x>0)
							autott_y -= 1;
						else {
							if (autott_x > -glutGet(GLUT_WINDOW_WIDTH) / 2 + 100)
								autott_x -= 1;
							else if (autott_y < glutGet(GLUT_WINDOW_HEIGHT) / 2 - 200)
								autott_y += 1;
						}

					}

				}
				else {
					glTranslatef(0.0, 0.0, 0.0);
				}
				if (autorolate == 1 ) {
					spin = spin + 0.8; /* xoay thêm số deg cho mỗi lần lặp */
					if (spin > 360.0)
						spin = spin - 360.0;
					if (spin > 180.0&&spin < 360.0)
						glRotatef((GLfloat)spin, 1.0, 0.0, 0.0);
					else
						glRotatef((GLfloat)spin, 0.0, 1.0, 0.0);
				}
				glScalef(1.0, 1.0, 1.0);
				glColor3f(1.0, 1.0, 1.0);


				if (solid == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
				if (line == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
				if (point == 1)
					glPolygonMode(GL_FRONT_AND_BACK, GL_POINT);

				glutSolidCone(const_size_model, const_size_model*2,100, 100);

				glPopMatrix();// Lấy lại hệ tọa độ mặc định ban đầu cho những lần vẽ sau
			}



		}

	glutSwapBuffers();
	glFlush();
}



void CDoAnDHMTDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH) / 2, glutGet(GLUT_SCREEN_HEIGHT));
	glutInitWindowPosition(glutGet(GLUT_SCREEN_WIDTH) / 2, 0);
	glutCreateWindow("Graphics Screen");
	Init();
	glutReshapeFunc(ReShape);
	glutMouseFunc(mouseButton);//đăng ký hàm mouse cho sự kiện về chuột 
	glutMotionFunc(mouseMove);//thực hiện chuyển động cho vật thể khi vừa di chuyển chuột và vừa nhấn chuột 
							  //hàm glutPassiveMotionFunc() thực hiện chuyển động cho vật thể khi vừa di chuyển chuột và không nhấn nút chuột 
	glutDisplayFunc(RenderScene);

	glutIdleFunc(RenderScene);

	glutMainLoop();

	CDialogEx::OnOK();
}

























































