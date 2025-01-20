package Synchronization;

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class lock1 {
    private final Lock lock = new ReentrantLock();

    public void someMethod() {
        lock.lock();  // Acquire lock
        try {
            // critical section
        } finally {
            lock.unlock();  // Ensure the lock is released
        }
    }
}
