This is the Custom SamKry60% keyboard! 
This readme file will break down every single thing on how to get to the keyboard actually working, to how to buy it. 

Table of contents: 
  1.) Full Item list 
  2.) Buying the PCB / What even is a PCB
  3.) PCB reccomendations/tips 
  4.) Soldering / Putting it together
  5.) Case design 
  6.) Getting the board to work



1.) Full Item list:
Below is the full item list necessary to have a functioning SamKry60% keyboard. The items with an * next to it, are absolute necessities to get a fully functioning keyboard. The rest are just reccomendations.
  - Samkry60 PCB* (I will go more into depth on how to purchse this on 2, Buying the PCB / What even is a PCB)
  - 68 two pin mechanical keyboard switches* (PCB mount switches are reccomended and get around 80). I reccomend doing some sort of research into what type of switch you like, as in linear, tactile, or clicky. I reccomend getting swtiches off of sellers on Amazon, and mechanicalkeyboards.com. But there is alot of other market places you may like. Make sure to compare the price to others before you purchase.
  - 68 DO-35 1N4148 diodes* (I reccomend getting 80-90)
  - 1 RP2040 zero* 
  - USBC cable* 
  - Soldering Iron* (neccasry if you solder of course)
  - Solder* 
  - Desoldering tool* (no one makes no mistakes when soldering, this makes it easier to fix said mistakes)
  - Wet Sponge* (needed for cleaning the hot soldering tip) 
  - Small wire cutters* (for cutting off the feet of the diodes, scissors could work too but I dont reccomend it)
  - Soldering fan (not needed but reccomended for the fumes)
  - Solder helping hands (not needed but its convenient) 
  - 5 Cherry MX screw in stabilizers (not "necesarry" for a working board but it is extremely more inconvenient to type without this)  
  - Keycaps set (though it is not "necessary" because itll still work without it, I cant imagine anyone would type on the bare switches) 
  - Case (Case design will be later explained)
  - M2 2.1 mm mounting screws (5 needed if you are making the case) this is needed for mounting the PCB to the case
  - 9 1/2 inch screws (used for holding the case together) 

2.) Buying the PCB / What even is a PCB
  - Think of a PCB like the motherboard of the keyboard, it holds everything together and helps it talk to the PC and get the keyboard to work. 
  - To get the PCB download this (INSERT GERBER FILE DOWNLOAD LINK)
  - From here you can use that download link and put it into some gerber to order sites. This essentially uploads the file, and makes it ready for purchase. 

3.) PCB reccomendations/tips
  - Some popular GERBER to order PCB sites are Elecrow, FusionPCB, PCBway, and JLCPCB.
  - I reccomend JLCPCB as they give you the most bang for your buck. 
  - For help uploading to JLCPCB look below (this is very similar to the instructions you would follow for other manufactureres if you dont use JLC).
-   -   Go to   https://jlcpcb.com/
    -   Make an account if you havent already, after that go back to the home page.
            - Press get instant quote
            - Upload the Gerber file you downloaded earlier
            - It should auto upload all of the appropiate settings, I wouldnt reccomend changing any of them after upload unless you are very familiar with the settings you are changing (unless its color, which is just personal preferencebut it will most likely take around 2 days longer to get the PCB if you change the color).
            - Go to order, input information and such. 
            - Change Shipping to cheapest possible option!!! It typically automatically goes to one of the most expensive options, in fact alot of the time shipping comes to be more expensive than the PCB itself (unless you pick the cheapest option).
            - Apply coupons if you can! JLCPCB is typically really good with coupons especially with new accounts. 
            - Now you can just order! Of course make sure your adress and delivery instructions are updated to what you need!

4.) Soldering / Putting it together
                QUICK FOOTNOTE: some PCB manufacturers do offer PCB assembely, I know JLC PCB offers it for the first time at least for free (supposedly), but it still may add costs no matter the manufacturer. I also know that you must upload a parts list, see if it complies with their components, and see if they can even do it. I have never done this so I cant reccomend it, please do reaserch and look into your manufacturers process before you go through with this. 
  - Gather all of your tools and components in a clear space. Work under a table or material that is unable to get burned or catch fire. 
  - I reccomend doing one diode, one switch, and the micro controller than flashing the board to try and get it to work to see if the one key functions properly.
    - General Soldering advice:
      - Use a desolder gun if you either apply too much solder, it goes in the wrong place, theres too much solder on your tip (or you can put it on a wet sponge to also clean it), or if it connects two pins or things that shouldnt be connected.
      - The maximum tempature your soldering iron should be should be around 550-600. Even that is quite high, if you feel like your soldering iron isnt burning at a good enough heat, give it some time, some take quite a bit of time to fully heat up. (Anything higher you can risk hurting yourself, damaging the board, the components, your surrondings and more.  
      - Be slow and patient, you could accidentally burn yourself, keep your hands away from the hot tip. 
    Diodes:  
      - I reccomend starting with the diodes, because it is much harder to solder them with all the switches in place already.  
      - Bend the diodes from a straight line they are originally in into something that looks like a table, where both legs of the diode are bent 90 degress (the legs of the table). The cylinder shaped thing in the middle that is typically orange and black should be the top of the table, so the two legs of the diode should be along side it, both pointing down and relatively even. 
      - From there you can put the legs of the diode through the bottom of the board. Make sure that the black part of the diode (Cathode -) is on the bottom part of the diode symbol, so it should be where the arrow is pointing. With this the orange part of the diode (Anode +) should be on the top part of the diode symbol. MAKE SURE YOU DO THIS FOR EVERY DIODE. 
      - Now for actually soldering the diodes, I reccomend turning the diode legs so that when you flip the board to the top side, the diodes dont budge. From there, put a little solder on your soldering tip, and place the solder on the base of the diode hole from the top side of the board. Do this to both holes of the diode (remember, the diode is on the bottom part of the board, but you are soldering it from the top). If there is a little but of solder covering the entire hole, for both holes, you are good to clip the feet of the diode, so that its only the bit of solder that is connecting it to the board. Rinse and repeat this process for every single diode.
    Switches:
      - This is alot more easier and straight foward than the diodes. Get your two pin PCB mount swtiches (plate mount should work fine too but they are alot harder to get to be exactly symetrical), and put them into the two holes on the top part of the board that are next to the diodes. They should fit perfectly. Then flip the board, make sure the switches dont fall out, and solder the two metal pins that stick through. Dont use too much solder, it should look like a hershey kiss by the end of it.
        - I reccomend doing one in each corner to make it more stable and easier to do the rest. 
    RP2040zero
      - Your RP2040 zero should come with 3 rows of pins, put the yellow part of the pins should be on the top side of the PCB, than fit the RP2040zero on top of the pins. Right now, the longer pins should sticking through the bottom and the yellow barriers should be on the top with the RP2040 zero on them.
      - Soldering these pins is very similar to the switches but you have to be slower because it is much smaller. 
      - I reccomend putting some solder on your tip, and putting the solder wire on the back of the pin and just wait a couple of seconds for it to melt. It should melt right into the pin perfectly. If it doesnt, try to rinse and repeat, if that doesnt work try touching the solder wire and the soldering iron directly on the base of the pin. 
      - At this point it is very common for beginners for too much solder to get used and for two pins to get connected. If this happens, you can melt the solder with your soldering iron, than when its melted (itll look liquidy) you can put your desolder gun right and on it and press. 
      - After you do this to the RP2040zero pins on the top of the board, you must do it to the pins on the RP2040zero pins on the bottom of the board. 
                                                                                                                               
5.) Case Design
  - 

6.) Getting the board to work
  - To get the board to actually work, you must upload the UF2 file. Lucky for you, I made it !
  - On the RP2040 Zero there should be a button called boot. Hold it down while plugging in the board. In your file explorer should be a drive that appears called RP1-RP2.
  - In the Github Repository, go to actions, Under all workflows press "Build samkry60 UF2".
  - Upon pressing this, after a few seconds, there should be a prompt that shows up that says "This workflow has a workflow_dispatch event trigger". Press run work flow and wait for it to build.
  - Should take 2+ minutes to finish running, you should know that its done running after the yellow circle indicating that its running turns into a green checkmark. 
  - From here, press on the work flow that just ran, its under all work flows and should be at the top (make sure your in the actions tab). Itll bring you into the summary section.
  - Scroll down until you see Artifacts, it should be near the top, than press the first name in artifacts, it is samkry60_test_uf2. This will download the UF2. 
  - After the UF2 is downloaded, drag it into the RP1-RP2 drive. It should automatically close. From here unplug it than replug it back in NOT pressing down any button on the RP2040 zero. 
  - Now you should have a fully functioning keyboard !!! 

SamKry60 Custom Keyboard brought to you by:
Samuel Astudillo - samuelastudillo201@gmail.com
Krystian Solowiej - KrySolowiej678@gmail.com
