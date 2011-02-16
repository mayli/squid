/*
 * $Id$
 *
 */

#ifndef SQUID_IPC_STRAND_SEARCH_H
#define SQUID_IPC_STRAND_SEARCH_H

#include "ipc/forward.h"
#include "ipc/StrandCoord.h"
#include "SquidString.h"
#include <sys/types.h>

namespace Ipc
{

/// asynchronous strand search request
class StrandSearchRequest
{
public:
    StrandSearchRequest();
    explicit StrandSearchRequest(const TypedMsgHdr &hdrMsg); ///< from recvmsg()
    void pack(TypedMsgHdr &hdrMsg) const; ///< prepare for sendmsg()

public:
    int requestorId; ///< sender-provided return address
    void *data; ///< sender-provided opaque pointer
    String tag; ///< set when looking for a matching StrandCoord::tag
};

/// asynchronous strand search response
class StrandSearchResponse
{
public:
    StrandSearchResponse(void *const aData, const StrandCoord &strand);
    explicit StrandSearchResponse(const TypedMsgHdr &hdrMsg); ///< from recvmsg()
    void pack(TypedMsgHdr &hdrMsg) const; ///< prepare for sendmsg()

public:
    void *data; ///< a copy of the StrandSearchRequest::data
    StrandCoord strand; ///< answer matching StrandSearchRequest criteria
};

} // namespace Ipc;

#endif /* SQUID_IPC_STRAND_SEARCH_H */
