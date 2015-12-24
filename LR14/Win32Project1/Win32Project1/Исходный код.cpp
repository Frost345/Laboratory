//	Написать приложение, выводящее в центре окна текст различным шрифтом
//( меняется имя шрифта, размер, цвет, начертание символов) в ответ на нажатия клавиш «1», «2», … и т.д. 
//(всего 9 различных стилей)
//Добавить обработку нажатия на правую клавишу мыши, при котором будут рисоваться окружности с разным цветом, 
//радиусом и координатами. Двойное нажатие на правую клашиу мыши прекращает рисование и очищает окно. 

#include <afxwin.h>
#include <string>

int i = 0, k = 0,clear=0;
int flag = 1;
CFont *m_pFont;

class CMainWin : public CFrameWnd
{
public:
	CMainWin();
	afx_msg void OnChar(UINT ch, UINT, UINT);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT flags, CPoint Loc);
	afx_msg void OnRButtonDown(UINT flags, CPoint Loc);
	void SetClientFont(CString Typeface, int Size, BOOL Bold, BOOL Italic);
	char pszMouseStr[50];
	DECLARE_MESSAGE_MAP()
};

class CApp : public CWinApp
{
public:
	BOOL InitInstance();
};

BOOL CApp::InitInstance()
{
	m_pMainWnd = new CMainWin;
	m_pMainWnd->ShowWindow(SW_RESTORE);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}

CMainWin::CMainWin()
{
	this->Create(0, L"Обработка сообщений");
}

BEGIN_MESSAGE_MAP
	(CMainWin, CFrameWnd)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_PAINT()
END_MESSAGE_MAP()

void CMainWin::SetClientFont(CString Typeface, int Size, BOOL Bold, BOOL Italic)
{
	// Получим контекст окна
	CWindowDC winDC(this);
	// Узнаем, сколько пикселей в одном логическом дюйме
	int pixelsPerInch = winDC.GetDeviceCaps(LOGPIXELSY);
	// Узнаем высоту в пикселях шрифта размером Size пунктов
	int fontHeight = -MulDiv(Size, pixelsPerInch, 72);
	// Устанавливаем параметр жирности для функции CreateFont()
	int Weight = FW_NORMAL;
	if (Bold)
		Weight = FW_BOLD;
	// Удаляем предыдущий экземпляр шрифта -- нельзя дважды 
	// инициализировать шрифт вызовом CreateFont().
	delete m_pFont;
	m_pFont = new CFont;
	// Создание шрифта. Большинство параметров не используются.
	m_pFont->CreateFont(fontHeight, 0, 0, 0, Weight, Italic, 0, 0,
		DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS, PROOF_QUALITY,
		DEFAULT_PITCH | FF_DONTCARE, Typeface);
}

afx_msg void CMainWin::OnChar(UINT ch, UINT, UINT)
{
	flag = 0;
	k = static_cast<int>(ch)-48;
	OnPaint();
	this->InvalidateRect(0);
}

afx_msg void CMainWin::OnLButtonDown(UINT, CPoint loc)
{
	i++;
	if (i == 5)
	{
		i = 0;
	}
	flag = 1;
	OnPaint();
	this->InvalidateRect(0);
}

afx_msg void CMainWin::OnRButtonDown(UINT, CPoint loc)
{
	flag = 2,clear=0;
	OnPaint();
	this->InvalidateRect(0);
}

afx_msg void CMainWin::OnPaint()
{
	CPaintDC dc(this);
	if (flag == 1)
	{
		switch (i)
		{
		case 0:
		{
			CPen aPen;
			aPen.CreatePen(PS_SOLID, 2, RGB(255, 255, 0));
			CPen* oldPen = dc.SelectObject(&aPen);
			CBrush aBrush(BLACK_BRUSH, RGB(0, 255, 255));
			CBrush* pOldBrush = dc.SelectObject(&aBrush);
			dc.Ellipse(10, 50, 50, 10);
		}
		break;
		case 1:
		{
			CPen aPen;
			aPen.CreatePen(PS_SOLID, 2, RGB(234, 23, 76));
			CPen* oldPen = dc.SelectObject(&aPen);
			CBrush aBrush(BLACK_BRUSH, RGB(97, 235, 97));
			CBrush* pOldBrush = dc.SelectObject(&aBrush);
			dc.Ellipse(10, 70, 70, 10);
		}
		break;
		case 2:
		{
			CPen aPen;
			aPen.CreatePen(PS_SOLID, 2, RGB(34, 78, 165));
			CPen* oldPen = dc.SelectObject(&aPen);
			CBrush aBrush(BLACK_BRUSH, RGB(67, 56, 25));
			CBrush* pOldBrush = dc.SelectObject(&aBrush);
			dc.Ellipse(10, 90, 90, 10);
		}
		break;
		case 3:
		{
			CPen aPen;
			aPen.CreatePen(PS_SOLID, 2, RGB(234, 43, 56));
			CPen* oldPen = dc.SelectObject(&aPen);
			CBrush aBrush(BLACK_BRUSH, RGB(0, 0, 255));
			CBrush* pOldBrush = dc.SelectObject(&aBrush);
			dc.Ellipse(10, 110, 110, 10);
		}
		break;
		case 4:
		{
			CPen aPen;
			aPen.CreatePen(PS_SOLID, 2, RGB(0, 255, 0));
			CPen* oldPen = dc.SelectObject(&aPen);
			CBrush aBrush(BLACK_BRUSH, RGB(255, 0, 0));
			CBrush* pOldBrush = dc.SelectObject(&aBrush);
			dc.Ellipse(10, 130, 130, 10);
		}
		break;
		}
	}
	if (flag == 0)
	{
		switch (k)
		{
		case 1:
		{
			this->SetClientFont("Arial", 20, TRUE, FALSE);
			dc.SetTextColor(RGB(255, 0, 0));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
			break;
		}
		case 2:
		{
			this->SetClientFont("Times new Roman", 40, FALSE, FALSE);
			dc.SetTextColor(RGB(255, 255, 0));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		break;
		case 3:
		{
			this->SetClientFont("Veranda", 25, FALSE, FALSE);
			dc.SetTextColor(RGB(255, 200, 100));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		break;
		case 4:
		{
			this->SetClientFont("Cambria", 30, FALSE, FALSE);
			dc.SetTextColor(RGB(255, 0, 100));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		break;
		case 5:
		{
			this->SetClientFont("Batang", 8, FALSE, FALSE);
			dc.SetTextColor(RGB(255, 100, 200));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		break;
		case 6:
		{
			this->SetClientFont("Tahoma", 15, FALSE, FALSE);
			dc.SetTextColor(RGB(255, 0, 200));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		break;
		case 7:
		{
			this->SetClientFont("Elephant", 25, FALSE, FALSE);
			dc.SetTextColor(RGB(255, 100, 50));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		break;
		case 8:
		{
			this->SetClientFont("Miriam", 17, FALSE, FALSE);
			dc.SetTextColor(RGB(100, 25, 50));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		break;
		case 9:
		{
			this->SetClientFont("Segoe Print", 60, FALSE, FALSE);
			dc.SetTextColor(RGB(0, 255, 50));
			dc.SelectObject(m_pFont);
			dc.TextOutW(480, 200, "Text");
		}
		}
	}
	if (flag==2)
		switch (clear)
	{
		case 0:
		{
			CPen aPen;
			aPen.CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
			CPen* oldPen = dc.SelectObject(&aPen);
			CBrush aBrush(BLACK_BRUSH, RGB(255, 255, 255));
			CBrush* pOldBrush = dc.SelectObject(&aBrush);
			dc.Rectangle(-10, -10, 1100, 1100);
		}
		break;
	}
}

CApp App;