#ifndef INCLUDED_sys__FileSystem_FileKind
#define INCLUDED_sys__FileSystem_FileKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,_FileSystem,FileKind)
namespace sys{
namespace _FileSystem{


class FileKind_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FileKind_obj OBJ_;

	public:
		FileKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("sys._FileSystem.FileKind","\x35","\xd0","\xa4","\x9e"); }
		::String __ToString() const { return HX_HCSTRING("FileKind.","\x1e","\xc8","\x95","\x85") + tag; }

		static ::sys::_FileSystem::FileKind kdir;
		static inline ::sys::_FileSystem::FileKind kdir_dyn() { return kdir; }
		static ::sys::_FileSystem::FileKind kfile;
		static inline ::sys::_FileSystem::FileKind kfile_dyn() { return kfile; }
		static ::sys::_FileSystem::FileKind kother(::String k);
		static Dynamic kother_dyn();
};

} // end namespace sys
} // end namespace _FileSystem

#endif /* INCLUDED_sys__FileSystem_FileKind */ 
