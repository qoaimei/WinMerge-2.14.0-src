/////////////////////////////////////////////////////////////////////////////
//    License (GPLv2+):
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful, but
//    WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
/////////////////////////////////////////////////////////////////////////////
/**
 * @file  CompareStatisticsDlg.h
 *
 * @brief Declaration file for CompareStatisticsDlg dialog
 */
// ID line follows -- this is updated by SVN
// $Id: CompareStatisticsDlg.h 5293 2008-04-14 05:58:23Z kimmov $

#ifndef _COMPARESTATISTICSDLG_H_
#define _COMPARESTATISTICSDLG_H_

class CompareStats;

/**
 * @brief A dialog showing folder compare statistics.
 * This dialog shows statistics about current folder compare. It shows amounts
 * if items in different compare status categories.
 */
class CompareStatisticsDlg : public CDialog
{
	DECLARE_DYNAMIC(CompareStatisticsDlg)

public:
	CompareStatisticsDlg(CWnd* pParent = NULL);   // standard constructor
	void SetCompareStats(const CompareStats * pStats);

// Dialog Data
	//{{AFX_DATA(CompareStatisticsDlg)
	enum { IDD = IDD_COMPARE_STATISTICS };
	//}}AFX_DATA

protected:
	// Generated message map functions
	//{{AFX_MSG(CompareStatisticsDlg)
	afx_msg BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Implementation data
private:
	const CompareStats * m_pCompareStats; /**< Compare statistics structure. */
};

#endif // _COMPARESTATISTICSDLG_H_
