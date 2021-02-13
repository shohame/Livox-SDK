
// Lidare_RecorderDlg.h : header file
//

#pragma once


// CLidareRecorderDlg dialog
class CLidareRecorderDlg : public CDialogEx
{
// Construction
public:
	CLidareRecorderDlg(CWnd* pParent = nullptr);	// standard constructor
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LIDARE_RECORDER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	HINSTANCE m_lnProcHandle;
	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	int m_isRecording;
public:
	afx_msg void OnBnClickedButtonStartRecord();
	afx_msg void OnBnClickedButtonStopRecord();
	afx_msg void OnClose();
	CButton m_btnStartRecord;
	CButton m_btnStopRecord;
};
