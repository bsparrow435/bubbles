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
		//makeGraphic(16,16, 0xffaa1111);
		loadGraphic(AssetPaths.PLAYER__png,true,16,16);
		setFacingFlip(FlxObject.LEFT,false,false);
		setFacingFlip(FlxObject.RIGHT,true,false);
		animation.add("lr",[3,4,3,5],6,false);
		maxVelocity.x = 400;
		maxVelocity.y = 600;
		acceleration.y = 600;
		drag.x = 1200;
	}

	public function movement():Void
	{

		//Player movement and controls
		acceleration.x = 0;
		if(FlxG.keys.anyPressed(["LEFT","A"]))
		{
			acceleration.x = -maxVelocity.x*4;
			facing = FlxObject.LEFT;
		}
		if(FlxG.keys.anyPressed(["RIGHT","D"]))
		{
			acceleration.x = maxVelocity.x*4;
			facing = FlxObject.RIGHT;
		}
		if(FlxG.keys.anyJustPressed(["SPACE"]) && isTouching(FlxObject.FLOOR))
		{
			velocity.y = -maxVelocity.y/2;
		}
		if((velocity.x != 0 || velocity.y != 0) && velocity.y == 0)
		{
			switch (facing) 
			{
			  	case FlxObject.RIGHT,FlxObject.LEFT:
			  		animation.play("lr");
			}  
		}
	}

	override public function update():Void
	{
		movement();
		super.update();
	}
}