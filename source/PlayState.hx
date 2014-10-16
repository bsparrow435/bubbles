package;

import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	private var _player:Player;
	private var _map:FlxOgmoLoader;
	private var _mWalls:FlxTilemap;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		_map = new FlxOgmoLoader("assets/data/room_001.oel"); //Room file from OGMO
		_mWalls = _map.loadTilemap("assets/images/tiles.png", 16, 16, "walls"); //Wall tiles
		_mWalls.setTileProperties(1, FlxObject.NONE); // Define floor tile
		_mWalls.setTileProperties(2, FlxObject.ANY); // Define wall tile
		add(_mWalls);

		_player = new Player(); //Create player
		_map.loadEntities(placeEntities, "entities"); //map function over all entities in OGMO map
		add(_player); //Enable player

		FlxG.camera.follow(_player, flixel.FlxCamera.STYLE_PLATFORMER,1);

		super.create();
	}

	private function placeEntities(entitiyName:String, entityData:Xml):Void
	{
		var x:Int = Std.parseInt(entityData.get("x"));
		var y:Int = Std.parseInt(entityData.get("y"));
		if(entitiyName == "player")
		{
			_player.x = x;
			_player.y = y;
		      
		}
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();

		FlxG.collide(_player, _mWalls);
	}	
}