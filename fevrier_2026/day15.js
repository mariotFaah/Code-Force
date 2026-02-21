/*
2026 Winter Games Day 15: Freestyle Skiing
Given a trick name consisting of two words, determine if it is a valid freestyle skiing trick name.

A trick is valid if the first word is in the list of valid first words, and the second word is in the list of valid second words.

The two words will be separated by a single space.
Valid first words:

"Misty"
"Ghost"
"Thunder"
"Solar"
"Sky"
"Phantom"
"Frozen"
"Polar"
Valid second words:

"Twister"
"Icequake"
"Avalanche"
"Vortex"
"Snowstorm"
"Frostbite"
"Blizzard"
"Shadow"
Run the Tests (Ctrl + Enter)
Reset this lesson
Get Help
Tests
Waiting:1. isValidTrick("Polar Vortex") should return true.
Waiting:2. isValidTrick("Solar Icequake") should return true.
Waiting:3. isValidTrick("Thunder Blizzard") should return true.
Waiting:4. isValidTrick("Phantom Frostbite") should return true.
Waiting:5. isValidTrick("Ghost Avalanche") should return true.
Waiting:6. isValidTrick("Snowstorm Shadow") should return false.
Waiting:7. isValidTrick("Solar Sky") should return false.
*/
function isValidTrick(trickName) {
  const mots= trickName.split(' ');
  //console.log(mots)
  const firstWd = mots[0];
  const secondWd = mots[1];
  const validFst = ["Misty","Ghost","Thunder","Solar","Sky","Phantom","Frozen","Polar"];
  const validScd = ["Twister","Icequake","Avalanche","Vortex","Snowstorm","Frostbite","Blizzard","Shadow"];
  for(let i=0; i<validFst.length;i++){
   if (validFst.includes(firstWd) && validScd.includes(secondWd)){
      return true;
    }
    return false;
  }

  /*function isValidTrick(trickName) {
  const mots = trickName.split(' ');
  const firstWd = mots[0];
  const secondWd = mots[1];

  const validFst = ["Misty", "Ghost", "Thunder", "Solar", "Sky", "Phantom", "Frozen", "Polar"];
  const validScd = ["Twister", "Icequake", "Avalanche", "Vortex", "Snowstorm", "Frostbite", "Blizzard", "Shadow"];

  // Check if the first word is in the first list AND the second word is in the second list
  if (validFst.includes(firstWd) && validScd.includes(secondWd)) {
    return true;
  }

  return false;
}*/

// Test cases
console.log(isValidTrick("Ghost Avalanche"));   // true
console.log(isValidTrick("Snowstorm Shadow")); // false

  /*if(firstWd==="Misty"||
firstWd==="Ghost"||
firstWd==="Thunder"||
firstWd==="Solar"||
firstWd==="Sky"||
firstWd==="Phantom"||
firstWd==="Frozen"||
firstWd==="Polar"&& secondWd==="Twister"||
secondWd==="Icequake"||
secondWd==="Avalanche"||
secondWd==="Vortex"||
secondWd==="Snowstorm"||
secondWd==="Frostbite"||
secondWd==="Blizzard"||
secondWd==="Shadow"){
    return true;
  } else {
    return false;
  }*/
  
}


console.log(isValidTrick("Ghost Avalanche"));
console.log(isValidTrick("Snowstorm Shadow"));