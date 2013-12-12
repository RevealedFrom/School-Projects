// JavaScript Document

// JavaScript Document

//Array for dice images
	imageArray = new Array ( );
	imageArray[0] = "dice/die1.png"; //something to fill 0
	imageArray[1] = "dice/die1.png";
	imageArray[2] = "dice/die2.png";
	imageArray[3] = "dice/die3.png";
	imageArray[4] = "dice/die4.png";
	imageArray[5] = "dice/die5.png";
	imageArray[6] = "dice/die6.png";

var die1,die2,dietotal,coins,thePoint,win,lose,gamecounter, newcoins;

function getReady() {
	die1=0; //variable for first die
	die2=0; //variable for first die
	dieTotal=0;
	coins = 100;
	document.getElementById("money").innerHTML=coins;
	thePoint = document.getElementById("point2");//.innerHTML=dieTotal;
	gamecounter=0;
	//win = false;
	//lose = false;
}

function newgame(){
	
	document.getElementById("gamestart").style.display='none'
	document.getElementById("gameover").style.display = 'none'
	getReady();
	}



function dieRoll(){ // dice roll function
	
	die1= Math.floor(Math.random()*6)+1;
		document.getElementById('die1Value').value=die1;
		document.getElementById("imageDisplay").src=imageArray[die1]; //die image corelates to array placment

	die2= Math.floor(Math.random()*6)+1;
		document.getElementById('die2Value').value=die2;
		document.getElementById("imageDisplay2").src=imageArray[die2]; //die image corelates to array placment
		
		dieTotal=die1+die2; // shows total of both dice
		document.getElementById('twoDieTotal').innerHTML=(die1+die2);
}

function theBet(){
	
	var bet = document.getElementById("bettingvalue").value;
	fullgame();
	
	if(win==true){
		//alert(coins+' win '+ bet);
		coins = newcoins = (coins*1)+(bet*2);
		document.getElementById("money").innerHTML=newcoins;
		document.getElementById("bettingvalue").innerHTML=bet;
		}
	else if(lose == true){
			//alert(coins+' lose '+ bet);
		coins = newcoins = (coins*1)-(bet);
		document.getElementById("money").innerHTML=newcoins;
		document.getElementById("bettingvalue").innerHTML=bet;
		}
	if(coins <= 0){
		document.getElementById("gameover").style.display='block'
		document.getElementById("gameBG").style.display='none'
		document.getElementById("getnothing").innerHTML
	
		}
		win=false;
		lose=false;
}


function fullgame(){

//conditionals are below
 dieRoll();
	// sets first game conditions

	for(gamecounter; gamecounter < 1; ++gamecounter){
		
		 // start of for loop for first game conditions and point instantiation
		if(dieTotal == 2 || dieTotal == 3 || dieTotal == 12){
			document.getElementById("game").style.display = 'none' //hides
			document.getElementById("loser").style.display = 'block'
			document.getElementById("winner").style.display = 'none'
			//thePoint = document.getElementById("point2").innerHTML=dieTotal;
			//++gamecounter;
			lose = true;
			win=false;
			document.getElementById("gameover").style.display='block'

			}
		else if(dieTotal==11 || dieTotal==7){
				document.getElementById("game").style.display = 'none' //hides
				document.getElementById("winner").style.display = 'block'
				document.getElementById("loser").style.display = 'none'

				newcoins = (coins*1)+(bet*2);
				document.getElementById("money").innerHTML=newcoins;
				document.getElementById("bettingvalue").innerHTML=bet;
			//thePoint = document.getElementById("point2").innerHTML=dieTotal;
			//++gamecounter;
			win = true;
			lose = false;
			}
		else{
			document.getElementById("point2").innerHTML=dieTotal;
			//++gamecounter;
			lose= false;
			win = false;
			thePoint = document.getElementById("point2").innerHTML=dieTotal;//est. the point
			document.getElementById("point2").value;
			}
			 
		}; // ends for loop
	winningCond();	
}//end of fullgame()


function winningCond(){
coins = document.getElementById("money").innerHTML=coins;
	 if(dieTotal == thePoint){
		document.getElementById("loser").style.display = 'none'
		document.getElementById("game").style.display = 'none' //hides
		document.getElementById("winner").style.display = 'block'
		win = true;
		
		++gamecounter;
		}
	else if(thePoint!= dieTotal && dieTotal == 7){
		document.getElementById("winner").style.display = 'none'
		document.getElementById("game").style.display = 'none' //hides
		document.getElementById("loser").style.display = 'block'
		lose = true;
		document.getElementById("getnothing").innerHTML = 'autoplay="getnothing"'
		++gamecounter;
		}
	else{
		document.getElementById("game").style.display = 'none'
		document.getElementById("loser").style.display = 'block'
		document.getElementById("winner").style.display = 'none'
		document.getElementById("getnothing").innerHTML = 'autoplay="getnothing" '
		lose = true;
		++gamecounter;
		}
	if(gamecounter>=6){
		document.getElementById("gameover").style.display='block'
		document.getElementById("getnothing").innerHTML
		//document.getElementById("gameBG").style.display='none'
			
			}

}


//core program ends here

