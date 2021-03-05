// Created by Arul Prakash Samathuvamani - University of Leeds PGT - hello@arulprakash.dev

// Created for CodeForces Kotlin Heros Practice 6 Contest - Problem C - File Name


private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toLong() } // list of ints

fun main(){

    // Main Function

    // Var "length" -> Length of File Name

    var length = readLine()!!.toInt()

    // 'file_name' -> Variable for File Name

    var file_name = readLine()!!

    // 'changes' -> Variable to denote number of times forbidden 'xxx' substring is repeating

    var changes = 0

    var temp = 0 // Counting number of consecutive 'x'

    for(i in 1..length-1){

        
        if(file_name[i] == 'x' && file_name[i-1] == 'x'){
            temp += 1
            //println(temp)
            //println("i: $i")
        }else{
            temp = 0
        }


        if (temp >= 2){
            changes += 1
        }

    }

println("$changes")


}