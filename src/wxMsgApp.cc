/*************************************************************************
 * File    : wxMsgApp.cc
 * Author  : Quan Zhuo <zhuo.quan@outlook.com>
 * Purpose : the Application class 
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


#include "wxMsgApp.h"
#include "wxMsgFrame.h"
          
// implements MyApp& GetApp()
wxDECLARE_APP(wxMsgApp);

// tell wxWidgets to create a wxMsgApp object 
wxIMPLEMENT_APP(wxMsgApp);

bool wxMsgApp::OnInit()
{
	const wxSize size(240, 520);
	wxMsgFrame *frame = new wxMsgFrame("wxMsg", wxDefaultPosition, 
	                                   size, WXMSGFRAME_STYPE);
	frame->Show(true);
	return true;
}
