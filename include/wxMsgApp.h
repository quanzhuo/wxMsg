/*************************************************************************
 * File    : wxMsgApp.h
 * Author  : Quan Zhuo <zhuo.quan@outlook.com>
 * Purpose : header for App
 * Created : 2015年09月13日 星期日 19时00分19秒
 *   
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *************************************************************************
 */


#ifndef WXMSGAPP_H
#define WXMSGAPP_H

// For compilers that support precompilation, includes "wx.h".
#include "wx/wxprec.h"

#ifndef	WX_PRECOMP
	//if the compiler do not support precompilation, include "wx.h"
	#include "wx/wx.h"
#endif

class wxMsgApp: public wxApp 
{
public:
	virtual bool OnInit();
};

// declare wxMsgApp& wxGetApp(). You can then call the function wxGetApp(), 
// which returns a reference to the wxMsgApp object. This function doesn't 
// exist in wxWidgets but it is created by using the wxIMPLEMENT_APP() macro.
wxDECLARE_APP(wxMsgApp);

#endif
