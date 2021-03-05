// Created by Arul Prakash Samathuvamani - University of Leeds PGT - hello@arulprakash.dev

// Created for CodeForces Kotlin Heros Practice 6 Contest - Problem B - Buying Water 

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toLong() } // list of ints

fun main(){

// Variable to find number of iterations

var q = readLine()!!.toInt()

// Running 'q' number of iterations

for (i in 1..q){

// getting input and splitting them to NO.of liters, price of 1 litre and price of 2 liter

// 'req_liter' -> No. of litres of water required , a -> price of 1 liter, b-> price of 2 liter

val(req_liter, a, b ) = readInts()

// 'cost' -> Minimum Cost

var cost = 0L

// Calculation for Finding minimum cost

if((a*2) > b){

var temp = req_liter/2
cost = temp * b
temp = req_liter%2
cost = cost + (temp * a)


}else{


cost = req_liter * a

}


println(cost)



}




}
