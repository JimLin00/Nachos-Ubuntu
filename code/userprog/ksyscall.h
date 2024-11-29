/**************************************************************
 *
 * userprog/ksyscall.h
 *
 * Kernel interface for systemcalls
 *
 * by Marcus Voelp  (c) Universitaet Karlsruhe
 *
 **************************************************************/

#ifndef __USERPROG_KSYSCALL_H__
#define __USERPROG_KSYSCALL_H__

#include "kernel.h"
#include "synchconsole.h"

void SysHalt() {
    kernel->interrupt->Halt();
}

void SysPrintInt(int val) {
    DEBUG(dbgTraCode, "In ksyscall.h:SysPrintInt, into synchConsoleOut->PutInt, " << kernel->stats->totalTicks);
    kernel->synchConsoleOut->PutInt(val);
    DEBUG(dbgTraCode, "In ksyscall.h:SysPrintInt, return from synchConsoleOut->PutInt, " << kernel->stats->totalTicks);
}

int SysAdd(int op1, int op2) {
    return op1 + op2;
}

int SysCreate(char *filename) {
    // return value
    // 1: success
    // 0: failed
    return kernel->fileSystem->Create(filename);
}

// When you finish the function "OpenAFile", you can remove the comment below.

OpenFileId SysOpen(char *name) {
    return kernel->fileSystem->OpenAFile(name);
}

int SysWrite(char *buf, int size, OpenFileId fd){
    // return write size
    return kernel->fileSystem->WriteAFile(buf, size, fd);
}

int SysRead(char *buf, int size, OpenFileId fd){
    return kernel->fileSystem->ReadAFile(buf, size, fd);
}

int SysClose(OpenFileId fd){
    return kernel->fileSystem->CloseAFile(fd);
}

#endif /* ! __USERPROG_KSYSCALL_H__ */
