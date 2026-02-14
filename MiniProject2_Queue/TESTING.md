# Testing Documentation

## TEST 1: Enqueue until queue is full
**Steps:**
1. Enqueued 5 items: 10, 20, 30, 40, 50
2. Attempted to enqueue sixth item: 60. 

**Expected**: Error message
**Result**: "Error: Queue is full." PASSED


## TEST 2: Dequeue until empty
**Steps:**
1. Enqueued until queue was full: 10, 20, 30, 40, 50
2. Dequeued five times (Output: Element dequeued: 10, Element dequeued: 20 ...)
3. Attempted to dequeue sixth time

**Expected**: Error message
**Result**: "Error: Queue is empty. -1" PASSED


## TEST 3: Wrap-around test (circular indexing)
**Steps:**
1. Enqueued 5 items: 10, 20, 30, 40, 50
2. Dequeued 2 items (Output: Element dequeued: 10, Element dequeued: 20)
3. Enqueue 2 items: 60, 70
4. Dequeue 5 items

**Expected**: Element dequeued: 30 - 70
**Result**: 
    "Element dequeued: 30" 
    "Element dequeued: 40"
    "Element dequeued: 50"
    "Element dequeued: 60"
    "Element dequeued: 70"
    PASSED


## TEST 4: Mixed operations sequence test
**Steps:**
1. Enqueue 2 items: 10, 20
2. Peek                         (Output: "Front element: 10")
3. Size                         (Output: "Queue size:: 2")
4. Dequeue 1 item               (Output: "Element dequeued: 10")
5. Peek                         (Output: "Front element: 20")
6. Enqueue 3 items: 30, 40, 50
7. Size                         (Output: "Queue size:: 4")
8. Dequeue all remaining items  (Output: Element dequeued: 20 - 50)

**Expected:** All operations execute correctly with proper queue ordering
**Result:** PASSED