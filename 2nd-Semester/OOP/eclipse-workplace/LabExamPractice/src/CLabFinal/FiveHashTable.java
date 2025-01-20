package CLabFinal;

public class FiveHashTable {
	class HashTable{
		int size;
		int key, originalKey;
		int[] hash_table;
		HashTable(int size){
			this.size = size;
			hash_table = new int[size];
		}
		void insert(int value) {
			key = value%size;
			originalKey = key;
			while(hash_table[key]!= 0) {
				key = (key+1)%size;
				if (key == originalKey) {  // If we looped through the entire table, it's full
                    System.out.println("Hash table is full, cannot insert " + value);
                    return;
                }
			}
			hash_table[key] = value;
			
		}
		void printTable() {
            for (int i = 0; i < hash_table.length; i++) {
                System.out.println("Index " + i + ": " + hash_table[i]);
            }
        }
	}
	
	public static void main(String[] args) {
		FiveHashTable obj = new FiveHashTable();
		int[] hash_table = new int[7];
		HashTable hobj = obj.new HashTable(7);
		hobj.insert(76);
		hobj.insert(93);
		hobj.insert(40);
		hobj.insert(47);
		hobj.insert(10);
		hobj.insert(55);
		
		hobj.printTable();
	}
}
