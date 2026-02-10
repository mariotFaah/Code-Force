/*
2026 Winter Games Day 4: Ski Jumping
Given distance points, style points, a wind compensation value, and K-point bonus value, calculate your score for the ski jump and determine if you won a medal or not.

Your score is calculated by summing the above four values.
The current total scores of the other jumpers are:

165.5
172.0
158.0
180.0
169.5
175.0
162.0
170.0
If your score is the best, return "Gold"
If it's second best, return "Silver"
If it's third best, return "Bronze"
Otherwise, return "No Medal"
Run the Tests (Ctrl + Enter)
Reset this lesson
Get Help
Tests
Passed:1. skiJumpMedal(125.0, 58.0, 0.0, 6.0) should return "Gold".
Passed:2. skiJumpMedal(119.0, 50.0, 1.0, 4.0) should return "Bronze".
Passed:3. skiJumpMedal(122.0, 52.0, -1.0, 4.0) should return "Silver".
Passed:4. skiJumpMedal(118.0, 50.5, -1.5, 4.0) should return "No Medal".
Passed:5. skiJumpMedal(124.0, 50.5, 2.0, 5.0) should return "Gold".
Passed:6. skiJumpMedal(119.0, 49.5, 0.0, 3.0) should return "No Medal".
*/

function bubbleSort(array){
    for(let i = array.length - 1; i > 0; i--) {
    for(let j = 0; j < i; j++) {
      if(array[j] < array[j + 1]) {
        let temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  return array;
  }


function skiJumpMedal(distancePoints, stylePoints, windComp, kPointBonus) {
  
  const score1 = 165.5;
  const score2 = 172.0;
  const score3 = 158.0;
  const score4 = 180.0;
  const score5 = 169.5;
  const score6 = 175.0;
  const score7 = 162.0;
  const score8 = 170.0;
  const myScore = distancePoints+stylePoints+windComp+kPointBonus;
  const scores = [score1,score2,score3, score4, score5,score6,score7,score8,myScore];
 
   const sortedScores = bubbleSort(scores); 
  /* bubbleSort(medal);
   let Gold = medal[0];
   let Silver = medal[1];
   let Bronze = medal[2];
   for(let i=3;i<medal.length;i++){
     return "No Medal";
   }*/
     const position = sortedScores.indexOf(myScore) + 1;
      switch (position) {
    case 1:
      return "Gold";
    case 2:
      return "Silver";
    case 3:
      return "Bronze";
    default:
      return "No Medal";
  }

   /*let medaille = myScore;
   switch(medaille){
     case Gold:
     return "Gold";
     break;
     case Silver:
     return "Silver";
     break;
     case Bronze:
     return "Bronze";
     default :
     return "No medal"
   }
   


  
  return medaille;*/
}
//console.log(skiJumpMedal(124.0, 50.5, 2.0, 5.0));
//console.log(skiJumpMedal(119.0, 49.5, 0.0, 3.0));
