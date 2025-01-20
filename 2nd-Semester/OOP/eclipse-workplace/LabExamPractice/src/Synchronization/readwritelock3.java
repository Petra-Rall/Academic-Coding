package Synchronization;

import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;

public class readwritelock3 {
    private final ReadWriteLock rwLock = new ReentrantReadWriteLock();

    public void readMethod() {
        rwLock.readLock().lock();
        try {
            // Read operation
        } finally {
            rwLock.readLock().unlock();
        }
    }

    public void writeMethod() {
        rwLock.writeLock().lock();
        try {
            // Write operation
        } finally {
            rwLock.writeLock().unlock();
        }
    }
}

