// Copyright 2010, Shuo Chen.  All rights reserved.
// http://code.google.com/p/muduo/
//
// Use of this source code is governed by a BSD-style license
// that can be found in the License file.

// Author: Shuo Chen (chenshuo at chenshuo dot com)
//

#include <muduo/net/http/HttpServer.h>

using namespace muduo;
using namespace muduo::net;


HttpServer::HttpServer(EventLoop* loop, 
                       const InetAddress& listenAddr,
                       const string& name)
  : server_(loop, listenAddr, name)
{
}

void HttpServer::start()
{
  server_.start();
}

