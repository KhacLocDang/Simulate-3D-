#pragma once


// GraphicSettingDlg dialog

class GraphicSettingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(GraphicSettingDlg)

public:
	GraphicSettingDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~GraphicSettingDlg();
	
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DOANDHMT_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
