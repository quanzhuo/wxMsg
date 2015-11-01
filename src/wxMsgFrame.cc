/*************************************************************************
 * File    : wxMsgFrame.cc
 * Author  : Quan Zhuo <zhuo.quan@outlook.com>
 * Purpose : class for the main frame
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


#include "wxMsgFrame.h"
#include "wxMsgChatDlg.h"

enum{
	wxID_BUTTON
};

// add event table for wxMsgFrame
wxBEGIN_EVENT_TABLE(wxMsgFrame, wxFrame)
	EVT_MENU(wxID_EXIT, wxMsgFrame::OnExit)
	EVT_MENU(wxID_ABOUT, wxMsgFrame::OnAbout)
	EVT_BUTTON(wxID_BUTTON, wxMsgFrame::OnButton)
wxEND_EVENT_TABLE()

wxMsgFrame::wxMsgFrame(const wxString &title, 
                       const wxPoint &position,
                       const wxSize &size )
:wxFrame(NULL, wxID_ANY, title, position, size)                       
{
	// create a file menu
	wxMenu *file = new wxMenu;
	file->Append(wxID_EXIT);
	
	// create a about menu
	wxMenu *about = new wxMenu;
	about->Append(wxID_ABOUT);
	
	// new a menu bar to place the menu
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append(file, "&File");
	menuBar->Append(about, "&About");
	
	// place the menu bar 
	SetMenuBar(menuBar);
	
	// create a status bar
	CreateStatusBar();
	SetStatusText("wxMsg");
}             

wxMsgFrame::wxMsgFrame(const wxString &title,
                       const wxPoint &postion,
                       const wxSize &size,
                       long style)
:wxFrame(NULL, wxID_ANY, title, postion, size, style)
{
	// create a file menu
	wxMenu *file = new wxMenu;
	file->Append(wxID_EXIT);
	
	// create a about menu
	wxMenu *about = new wxMenu;
	about->Append(wxID_ABOUT);
	
	// new a menu bar to place the menu
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append(file, "&File");
	menuBar->Append(about, "&About");
	
	// place the menu bar 
	SetMenuBar(menuBar);
	
	// create a status bar
	CreateStatusBar();
	SetStatusText("wxMsg");
		
	// add a wxPanel as a container
	wxPanel *panel = new wxPanel(this);
	wxButton * button = new wxButton(panel, wxID_BUTTON, "click me");
	wxBoxSizer *topSizer = new wxBoxSizer(wxVERTICAL);
	topSizer->AddStretchSpacer(1);
	topSizer->Add(button, 0, wxALIGN_CENTER, 5);
	topSizer->AddStretchSpacer(1);
	panel->SetSizer(topSizer);
}                                 

void wxMsgFrame::OnExit(wxCommandEvent &event)
{
	Close(true); 
}

void wxMsgFrame::OnAbout(wxCommandEvent &event)
{

}

void wxMsgFrame::OnButton(wxCommandEvent &event){
	wxDialog *dlg = new wxMsgChatDlg("test");
	dlg->Show();
}
