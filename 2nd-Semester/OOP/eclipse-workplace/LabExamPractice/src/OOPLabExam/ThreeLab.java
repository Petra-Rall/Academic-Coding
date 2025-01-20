package OOPLabExam;
import java.util.Random;

class ParallelMin implements Runnable{
	private int[] numbers;
	private int startIndex, endIndex;
	private int min;
	
	public ParallelMin(int[] numbers, int startIndex, int endIndex) {
		this.numbers = numbers;
		this.startIndex = startIndex;
		this.endIndex = endIndex;
	}
	
	public void run() {
		System.out.println(Thread.currentThread().getName()+"is running");
		min = numbers[startIndex];
		for(int i = startIndex + 1; i < endIndex; i++) {
			if(numbers[i] < min) {
				min = numbers[i];
			}
		}
	}
	public int getMin() {
		return min;
	}
}
public class ThreeLab {
	public static void main(String[] args) {
		Random random = new Random();
		int[] numbers = new int[500];
		
		for(int i = 0; i < numbers.length; i++) {
			numbers[i] = random.nextInt();
		}
		
		// Create 5 threads to process the array in parallel
		ParallelMin[] tasks = new ParallelMin[5];
		Thread[] threads = new Thread[5];
		
		// Divide the array into 5 parts and assign each part to a thread
		for(int i = 0; i < 5; i++) {
			int startIndex = i * 100;
			int endIndex = (i + 1) * 100;
			tasks[i] = new ParallelMin(numbers, startIndex, endIndex);
			threads[i] = new Thread(tasks[i]);
			threads[i].start();
		}
		
		for(int i = 0; i < 5; i++) {
			try {
				threads[i].join();
			}
			catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
		
		int overallMin = Integer.MAX_VALUE;
		for(int i = 0; i < 5; i++) {
			int threadMin = tasks[i].getMin();
			if(threadMin < overallMin) {
				overallMin = threadMin;
			}
		}
		System.out.println("The minimum value is: " + overallMin);
	}
}
