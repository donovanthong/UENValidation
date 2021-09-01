#pragma once
#include"wx\wx.h";

class cMain : public wxFrame
{
public:
	cMain();

public:
	wxButton* enterButton = nullptr;
	wxTextCtrl* validityTxt = nullptr;
	wxStaticText* enterUEN = nullptr;
	wxStaticText* answer = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

