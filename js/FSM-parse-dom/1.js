// //找字符串a
// function match(string){
//     for(let c of string){
//         if(c==='a'){
//              return true
//         }
//        return false

//     }
// }

// //abc
// function matchabc(string){
//     let foundA=false;
//     let foundB=false;
//     for(let c of string){
//         if(c==='a'){
//             foundA=true;
//         }else if(foundA && c==='b'){
//             foundB= true
//         }else if(foundB && c==='c'){
//             return true
//         } else{
//             foundA=false
//             foundB=false
//         }       
//     }
//     return false
// }

// console.log(matchabc('acbdefab'))

//数组展平
function flatten(arr){
    let newArr = arr.map((item) => {
        // console.log(item)
        return Array.isArray(item)?flatten(item):item;
    })
    return [].concat(...newArr)
}
let arr = [1,[2,3],[4,[5,6]]]
console.log(flatten(arr))
