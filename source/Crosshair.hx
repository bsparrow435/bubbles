package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxAngle;
import flixel.util.FlxColor;

class Crosshair extends FlxSprite {
	
	public function new (X:Float=0, Y:Float=0) {
		super(X, Y);
		loadGraphic(AssetPaths.crosshair__png,true,32,32);
		
	}
	
	override public function update():Void  {
		x = FlxG.mouse.x - 32;
		y = FlxG.mouse.y - 32;
		super.update();
	}
}