#include "wx/wx.h"
#include "Main.h"

class EternallyManagedMods : public wxApp{
	public:
		EternallyManagedMods();
		~EternallyManagedMods();

	private:
		Main* m_frame1 = nullptr;

	public:
		virtual bool OnInit();
};
