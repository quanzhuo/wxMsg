/*************************************************************************
 * File    : wxMsgChatDlg.cc
 * Author  : Quan Zhuo <zhuo.quan@outlook.com>
 * Purpose : class for the chat dialog
 * Created : 01/11/2015 09:56:29 
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


#include "wxMsgChatDlg.h"

// add event table for wxMsgChatDlg
wxBEGIN_EVENT_TABLE(wxMsgChatDlg, wxDialog)
	EVT_CLOSE(wxMsgChatDlg::OnClose)
wxEND_EVENT_TABLE()

wxMsgChatDlg::wxMsgChatDlg(const wxString &title)
:wxDialog(NULL, wxID_ANY, title, wxDefaultPosition, wxDefaultSize)                       
{

}             

wxMsgChatDlg::wxMsgChatDlg(const wxString &title,
                       const wxPoint &postion,
                       const wxSize &size,
                       long style)
:wxDialog(NULL, wxID_ANY, title, postion, size, style)
{
	
}                                 

void wxMsgChatDlg::OnClose(wxCloseEvent &event){
	Destroy();
}
