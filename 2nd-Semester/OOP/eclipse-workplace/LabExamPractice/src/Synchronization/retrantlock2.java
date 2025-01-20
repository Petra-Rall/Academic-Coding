package Synchronization;

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class retrantlock2 {
    private final Lock lock = new ReentrantLock();

    public void someMethod() {
        lock.lock();  // Acquire the lock
        try {
            // Critical section
        } finally {
            lock.unlock();  // Always unlock in the finally block
        }
    }
}
