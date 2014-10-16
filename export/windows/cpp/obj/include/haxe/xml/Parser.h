#ifndef INCLUDED_haxe_xml_Parser
#define INCLUDED_haxe_xml_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Parser)
namespace haxe{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  Parser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Parser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Parser"); }

		static ::haxe::ds::StringMap escapes;
		static ::Xml parse( ::String str);
		static Dynamic parse_dyn();

		static int doParse( ::String str,hx::Null< int >  p,::Xml parent);
		static Dynamic doParse_dyn();

};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Parser */ 
