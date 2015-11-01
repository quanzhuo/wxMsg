/*************************************************************************
 * File    : wxMsgChatDlg.h
 * Author  : Quan Zhuo <zhuo.quan@outlook.com>
 * Purpose : header for the chat dialog
 * Created : 01/11/2015 09:52:26 
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


#ifndef WXMSG_CHATDIALOG_H
#define WXMSG_CHATDIALOG_H

// For compilers that support precompilation, includes "wx.h".
#include "wx/wxprec.h"

#ifndef	WX_PRECOMP
	//if the compiler do not support precompilation, include "wx.h"
	#include "wx/wx.h"
#endif

// Custom style for wxMsgChatDlg
#define   WXMSGFRAME_STYPE       \
          wxSYSTEM_MENU |     \
          wxRESIZE_BORDER |   \
          wxMINIMIZE_BOX |    \
          wxCLOSE_BOX |       \
          wxCAPTION |         \
          wxCLIP_CHILDREN

class wxMsgChatDlg: public wxDialog
{
public:
	wxMsgChatDlg(const wxString &title);
	           
  // Use this constructor to custom the frame
	wxMsgChatDlg(const wxString &title, 
	           const wxPoint &pos,    
	           const wxSize &size,
	           long style);

private:
  void OnClose(wxCloseEvent &event);
	
	
wxDECLARE_EVENT_TABLE(); 
};

#endif
