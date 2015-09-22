/*************************************************************************
 * File    : wxMsgFrame.h
 * Author  : Quan Zhuo <zhuo.quan@outlook.com>
 * Purpose : header for the main frame
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


#ifndef WXMSGFRAME_H
#define WXMSGFRAME_H

// For compilers that support precompilation, includes "wx.h".
#include "wx/wxprec.h"

#ifndef	WX_PRECOMP
	//if the compiler do not support precompilation, include "wx.h"
	#include "wx/wx.h"
#endif

// Custom style for wxMsgFrame
#define   WXMSGFRAME_STYPE       \
          wxSYSTEM_MENU |     \
          wxRESIZE_BORDER |   \
          wxMINIMIZE_BOX |    \
          wxCLOSE_BOX |       \
          wxCAPTION |         \
          wxCLIP_CHILDREN

class wxMsgFrame: public wxFrame
{
public:
	wxMsgFrame(const wxString &title, 
	           const wxPoint &pos = wxDefaultPosition,
	           const wxSize &size = wxDefaultSize);
	           
  // Use this constructor to custom the frame
	wxMsgFrame(const wxString &title, 
	           const wxPoint &pos,    
	           const wxSize &size,
	           long style);

private:
	void OnAbout(wxCommandEvent &event);
	void OnExit(wxCommandEvent &event);	    
	
wxDECLARE_EVENT_TABLE(); 
};

#endif
