
// DoAnDHMTDlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CDoAnDHMTDlg dialog
class CDoAnDHMTDlg : public CDialogEx
{
// Construction
public:
	CDoAnDHMTDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DOANDHMT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedRadio7();
	afx_msg void OnBnClickedRadio9();
	afx_msg void OnBnClickedRadio8();
	afx_msg void OnNMCustomdrawSlider2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit3();
	CEdit var_fovy;
	CSliderCtrl slider_fovy;

	afx_msg void OnNMCustomdrawSlider4(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit5();
	CSliderCtrl slider_pnear;
	CEdit var_pnear;
	CSliderCtrl slider_pfar;
	CEdit var_pfar;
	afx_msg void OnNMCustomdrawSlider5(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CSliderCtrl slider_eyex;
	CEdit var_eyex;
	CSliderCtrl slider_eyey;
	CEdit var_eyey;
	CSliderCtrl slider_eyez;
	CEdit var_eyez;
	afx_msg void OnNMCustomdrawSlider6(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnNMCustomdrawSlider7(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit8();
	afx_msg void OnNMCustomdrawSlider8(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit9();

	afx_msg void OnBnClickedRadio10();
	afx_msg void OnBnClickedRadio13();
	afx_msg void OnBnClickedRadio12();
	afx_msg void OnBnClickedRadio14();
	afx_msg void OnBnClickedRadio11();
	afx_msg void OnNMCustomdrawSlider9(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit10();
	CSliderCtrl slider_scalex;
	CEdit var_scalex;
	afx_msg void OnNMCustomdrawSlider10(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit11();
	CSliderCtrl slider_scaley;
	CEdit var_scaley;
	CSliderCtrl slider_scalez;
	CEdit var_scalez;
	afx_msg void OnNMCustomdrawSlider11(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit12();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedCheck1();
	CSliderCtrl slider_modelx;
	CEdit var_modelx;
	afx_msg void OnNMCustomdrawSlider17(NMHDR *pNMHDR, LRESULT *pResult);
	CSliderCtrl slider_modely;
	CEdit var_modely;
	CSliderCtrl slider_modelz;
	CEdit var_modelz;
	CSliderCtrl slider_upx;
	afx_msg void OnEnChangeEdit16();
	CEdit var_upx;
	CSliderCtrl slider_upy;
	CEdit var_upy;
	CSliderCtrl slider_upz;
	CEdit var_upz;
	afx_msg void OnNMCustomdrawSlider12(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit13();
	afx_msg void OnEnChangeEdit18();
	afx_msg void OnNMCustomdrawSlider13(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit14();
	afx_msg void OnNMCustomdrawSlider15(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMCustomdrawSlider14(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit15();
	afx_msg void OnNMCustomdrawSlider16(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnEnChangeEdit17();
	afx_msg void OnBnClickedRadio15();
	afx_msg void OnBnClickedRadio16();
};
