#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace ogmo{

Void FlxOgmoLoader_obj::__construct(Dynamic LevelData)
{
HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","new",0x7241dd6e,"flixel.addons.editors.ogmo.FlxOgmoLoader.new","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",30,0xc7bbc002)
HX_STACK_THIS(this)
HX_STACK_ARG(LevelData,"LevelData")
{
	HX_STACK_LINE(32)
	::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(35)
	if ((::Std_obj::is(LevelData,hx::ClassOf< ::Class >()))){
		HX_STACK_LINE(37)
		::String _g = ::Type_obj::createInstance(LevelData,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		str = _g;
	}
	else{
		HX_STACK_LINE(40)
		if ((::Std_obj::is(LevelData,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(42)
			::String _g1 = ::openfl::_v2::Assets_obj::getText(LevelData);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			str = _g1;
		}
	}
	HX_STACK_LINE(45)
	::Xml _g2 = ::haxe::xml::Parser_obj::parse(str);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(45)
	this->_xml = _g2;
	HX_STACK_LINE(46)
	::Xml _g3 = this->_xml->firstElement();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(46)
	::haxe::xml::Fast _g4 = ::haxe::xml::Fast_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(46)
	this->_fastXml = _g4;
	HX_STACK_LINE(48)
	::String _g5 = this->_fastXml->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(48)
	Dynamic _g6 = ::Std_obj::parseInt(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(48)
	this->width = _g6;
	HX_STACK_LINE(49)
	::String _g7 = this->_fastXml->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(49)
	Dynamic _g8 = ::Std_obj::parseInt(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(49)
	this->height = _g8;
	HX_STACK_LINE(51)
	::flixel::FlxG_obj::camera->setBounds((int)0,(int)0,this->width,this->height,true);
}
;
	return null();
}

//FlxOgmoLoader_obj::~FlxOgmoLoader_obj() { }

Dynamic FlxOgmoLoader_obj::__CreateEmpty() { return  new FlxOgmoLoader_obj; }
hx::ObjectPtr< FlxOgmoLoader_obj > FlxOgmoLoader_obj::__new(Dynamic LevelData)
{  hx::ObjectPtr< FlxOgmoLoader_obj > result = new FlxOgmoLoader_obj();
	result->__construct(LevelData);
	return result;}

Dynamic FlxOgmoLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxOgmoLoader_obj > result = new FlxOgmoLoader_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::tile::FlxTilemap FlxOgmoLoader_obj::loadTilemap( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::String __o_TileLayer){
int TileWidth = __o_TileWidth.Default(16);
int TileHeight = __o_TileHeight.Default(16);
::String TileLayer = __o_TileLayer.Default(HX_CSTRING("tiles"));
	HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","loadTilemap",0xf1a379b6,"flixel.addons.editors.ogmo.FlxOgmoLoader.loadTilemap","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",69,0xc7bbc002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(TileLayer,"TileLayer")
{
		HX_STACK_LINE(70)
		::flixel::tile::FlxTilemap tileMap = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tileMap,"tileMap");
		HX_STACK_LINE(71)
		::String _g = this->_fastXml->node->resolve(TileLayer)->get_innerData();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		tileMap->loadMap(_g,TileGraphic,TileWidth,TileHeight,null(),null(),null(),null());
		HX_STACK_LINE(73)
		return tileMap;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxOgmoLoader_obj,loadTilemap,return )

Void FlxOgmoLoader_obj::loadEntities( Dynamic EntityLoadCallback,::String __o_EntityLayer){
::String EntityLayer = __o_EntityLayer.Default(HX_CSTRING("entities"));
	HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","loadEntities",0x787963b9,"flixel.addons.editors.ogmo.FlxOgmoLoader.loadEntities","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",96,0xc7bbc002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EntityLoadCallback,"EntityLoadCallback")
	HX_STACK_ARG(EntityLayer,"EntityLayer")
{
		HX_STACK_LINE(97)
		::haxe::xml::Fast actors = this->_fastXml->node->resolve(EntityLayer);		HX_STACK_VAR(actors,"actors");
		HX_STACK_LINE(100)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(actors->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast a = __it->next();
			{
				HX_STACK_LINE(102)
				::String _g = a->get_name();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(102)
				EntityLoadCallback(_g,a->x).Cast< Void >();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxOgmoLoader_obj,loadEntities,(void))

Void FlxOgmoLoader_obj::loadRectangles( Dynamic RectLoadCallback,::String __o_RectLayer){
::String RectLayer = __o_RectLayer.Default(HX_CSTRING("rectangles"));
	HX_STACK_FRAME("flixel.addons.editors.ogmo.FlxOgmoLoader","loadRectangles",0x3448f0dc,"flixel.addons.editors.ogmo.FlxOgmoLoader.loadRectangles","flixel/addons/editors/ogmo/FlxOgmoLoader.hx",114,0xc7bbc002)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RectLoadCallback,"RectLoadCallback")
	HX_STACK_ARG(RectLayer,"RectLayer")
{
		HX_STACK_LINE(115)
		::haxe::xml::Fast rects = this->_fastXml->node->resolve(RectLayer);		HX_STACK_VAR(rects,"rects");
		HX_STACK_LINE(117)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(rects->get_elements());  __it->hasNext(); ){
			::haxe::xml::Fast r = __it->next();
			{
				HX_STACK_LINE(119)
				::flixel::util::FlxRect _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					::String _g = r->x->get(HX_CSTRING("x"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(119)
					Float X = ::Std_obj::parseInt(_g);		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(119)
					::String _g1 = r->x->get(HX_CSTRING("y"));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(119)
					Float Y = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(119)
					::String _g2 = r->x->get(HX_CSTRING("w"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(119)
					Float Width = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(119)
					::String _g3 = r->x->get(HX_CSTRING("h"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(119)
					Float Height = ::Std_obj::parseInt(_g3);		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(119)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(119)
					{
						HX_STACK_LINE(119)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(119)
						_this->x = X;
						HX_STACK_LINE(119)
						_this->y = Y;
						HX_STACK_LINE(119)
						_this->width = Width;
						HX_STACK_LINE(119)
						_this->height = Height;
						HX_STACK_LINE(119)
						rect = _this;
					}
					HX_STACK_LINE(119)
					rect->_inPool = false;
					HX_STACK_LINE(119)
					_g4 = rect;
				}
				HX_STACK_LINE(119)
				RectLoadCallback(_g4).Cast< Void >();
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxOgmoLoader_obj,loadRectangles,(void))


FlxOgmoLoader_obj::FlxOgmoLoader_obj()
{
}

void FlxOgmoLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxOgmoLoader);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(_xml,"_xml");
	HX_MARK_MEMBER_NAME(_fastXml,"_fastXml");
	HX_MARK_END_CLASS();
}

void FlxOgmoLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(_xml,"_xml");
	HX_VISIT_MEMBER_NAME(_fastXml,"_fastXml");
}

Dynamic FlxOgmoLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { return _xml; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fastXml") ) { return _fastXml; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadTilemap") ) { return loadTilemap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEntities") ) { return loadEntities_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadRectangles") ) { return loadRectangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxOgmoLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_xml") ) { _xml=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_fastXml") ) { _fastXml=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxOgmoLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("_xml"));
	outFields->push(HX_CSTRING("_fastXml"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxOgmoLoader_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(FlxOgmoLoader_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(FlxOgmoLoader_obj,_xml),HX_CSTRING("_xml")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(FlxOgmoLoader_obj,_fastXml),HX_CSTRING("_fastXml")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("_xml"),
	HX_CSTRING("_fastXml"),
	HX_CSTRING("loadTilemap"),
	HX_CSTRING("loadEntities"),
	HX_CSTRING("loadRectangles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxOgmoLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxOgmoLoader_obj::__mClass,"__mClass");
};

#endif

Class FlxOgmoLoader_obj::__mClass;

void FlxOgmoLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.ogmo.FlxOgmoLoader"), hx::TCanCast< FlxOgmoLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxOgmoLoader_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace ogmo
