#include "EternallyManagedMods.h"
#define __GXX_ABI_VERSION 1014

wxIMPLEMENT_APP(EternallyManagedMods);

EternallyManagedMods::EternallyManagedMods(){}

EternallyManagedMods::~EternallyManagedMods(){}

bool EternallyManagedMods::OnInit(){
	m_frame1 = new Main();
	m_frame1->Show();
	return true;
}
