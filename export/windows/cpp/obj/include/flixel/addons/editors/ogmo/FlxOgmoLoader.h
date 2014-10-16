#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#define INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmoLoader)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace ogmo{


class HXCPP_CLASS_ATTRIBUTES  FlxOgmoLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxOgmoLoader_obj OBJ_;
		FlxOgmoLoader_obj();
		Void __construct(Dynamic LevelData);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxOgmoLoader_obj > __new(Dynamic LevelData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxOgmoLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxOgmoLoader"); }

		int width;
		int height;
		::Xml _xml;
		::haxe::xml::Fast _fastXml;
		virtual ::flixel::tile::FlxTilemap loadTilemap( Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,::String TileLayer);
		Dynamic loadTilemap_dyn();

		virtual Void loadEntities( Dynamic EntityLoadCallback,::String EntityLayer);
		Dynamic loadEntities_dyn();

		virtual Void loadRectangles( Dynamic RectLoadCallback,::String RectLayer);
		Dynamic loadRectangles_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace ogmo

#endif /* INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader */ 
