import java.util.*

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    val entrada : Double
    entrada = reader.nextDouble()
 
    var answerString = when {
        entrada <=25 && entrada>=0 -> "Intervalo [0,25]"
        entrada <=50 && entrada>=0 -> "Intervalo (25,50]"
        entrada <= 75 && entrada>=0 ->"Intervalo (50,75]"
        entrada <=100 && entrada>=0 -> "Intervalo (75,100]"
        entrada <0 -> "Fora de intervalo"
        else -> "Fora de intervalo"
    }
    println(answerString)

} 