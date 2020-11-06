
public class menu { //you forget that line

    public static void main(String [] args){

		int dollar = 1;
		if(dollar > 0){ // make change from here
            System.out.print("the");
            switch(dollar){// don't use break and don't repeat words (fish,rice,bread) and use ternary

            default :
                System.out.println("bread");
                System.out.print("And");

            case 2 :
                System.out.println("rice");
                System.out.print("And");

            case 1 :
                System.out.println("fish");
		}
        }


	}

}
/*
dollar = 1
-----------
the fish
dollar = 2
----------
the rice
And fish
dollar >= 3
----------
the bread
And rice
And fish
*/
