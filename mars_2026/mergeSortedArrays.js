/*
A: [1, 2, 3, 4, 4]
B: [2, 4, 5, 5]
C: [1, 2, 2, 3, 4, 4, 4, 5, 5]
*/

const A = [1,2,3,3,4];
const B = [1,2,2,3,3,4];
const C=[];
for(let i=0;i<A.length;i++){
	C[i]=A[i];

}

for(let j=0;j<B.length;j++){
	C[A.length+j]=B[j];
}

for(let k=0;k<C.length;k++){
	console.log(C[k]);
}