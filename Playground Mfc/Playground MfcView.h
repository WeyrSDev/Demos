
// Playground MfcView.h : interface of the CPlaygroundMfcView class
//

#pragma once


class CPlaygroundMfcView : public CView
{
protected: // create from serialization only
	CPlaygroundMfcView() noexcept;
	DECLARE_DYNCREATE(CPlaygroundMfcView)

// Attributes
public:
	CPlaygroundMfcDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CPlaygroundMfcView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Playground MfcView.cpp
inline CPlaygroundMfcDoc* CPlaygroundMfcView::GetDocument() const
   { return reinterpret_cast<CPlaygroundMfcDoc*>(m_pDocument); }
#endif

