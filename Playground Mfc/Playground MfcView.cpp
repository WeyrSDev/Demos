
// Playground MfcView.cpp : implementation of the CPlaygroundMfcView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Playground Mfc.h"
#endif

#include "Playground MfcDoc.h"
#include "Playground MfcView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPlaygroundMfcView

IMPLEMENT_DYNCREATE(CPlaygroundMfcView, CView)

BEGIN_MESSAGE_MAP(CPlaygroundMfcView, CView)
END_MESSAGE_MAP()

// CPlaygroundMfcView construction/destruction

CPlaygroundMfcView::CPlaygroundMfcView() noexcept
{
	// TODO: add construction code here

}

CPlaygroundMfcView::~CPlaygroundMfcView()
{
}

BOOL CPlaygroundMfcView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CPlaygroundMfcView drawing

void CPlaygroundMfcView::OnDraw(CDC* /*pDC*/)
{
	CPlaygroundMfcDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CPlaygroundMfcView diagnostics

#ifdef _DEBUG
void CPlaygroundMfcView::AssertValid() const
{
	CView::AssertValid();
}

void CPlaygroundMfcView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPlaygroundMfcDoc* CPlaygroundMfcView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPlaygroundMfcDoc)));
	return (CPlaygroundMfcDoc*)m_pDocument;
}
#endif //_DEBUG


// CPlaygroundMfcView message handlers
