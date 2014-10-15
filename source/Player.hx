package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxAngle;
import flixel.util.FlxColor;

//Player class for 
class Player extends FlxSprite
{
	public function new(X:Float=0, Y:Float=0)
	{
		super(X,Y);
		makeGraphic(16,16, 0xffaa1111);
		maxVelocity.x = 400;
		maxVelocity.y = 1000;
		acceleration.y = 1000;
		drag.x = 1600;
	}

	public function movement():Void
	{

		//Player movement and controls
		acceleration.x = 0;
		if(FlxG.keys.anyPressed(["LEFT","A"]))
		{
			acceleration.x = -maxVelocity.x*4;
		}
		if(FlxG.keys.anyPressed(["RIGHT","D"]))
		{
			acceleration.x = maxVelocity.x*4;
		}
		if(FlxG.keys.anyJustPressed(["SPACE"]) && isTouching(FlxObject.FLOOR))
		{
			velocity.y = -maxVelocity.y/2;
		}
	}

	override public function update():Void
	{
		movement();
		super.update();
	}
}