#include "config.h"
int unused_main(int argc, char *argv[]);
#define main unused_main
#include "../queries.c"
#undef main
#include <common/blinding.h>
#include <common/channel_type.h>
#include <common/ecdh.h>
#include <common/json_stream.h>
#include <common/onionreply.h>
#include <common/setup.h>
#include <stdio.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for blinding_hash_e_and_ss */
void blinding_hash_e_and_ss(const struct pubkey *e UNNEEDED,
			    const struct secret *ss UNNEEDED,
			    struct sha256 *sha UNNEEDED)
{ fprintf(stderr, "blinding_hash_e_and_ss called!\n"); abort(); }
/* Generated stub for blinding_next_privkey */
bool blinding_next_privkey(const struct privkey *e UNNEEDED,
			   const struct sha256 *h UNNEEDED,
			   struct privkey *next UNNEEDED)
{ fprintf(stderr, "blinding_next_privkey called!\n"); abort(); }
/* Generated stub for blinding_next_pubkey */
bool blinding_next_pubkey(const struct pubkey *pk UNNEEDED,
			  const struct sha256 *h UNNEEDED,
			  struct pubkey *next UNNEEDED)
{ fprintf(stderr, "blinding_next_pubkey called!\n"); abort(); }
/* Generated stub for daemon_conn_wake */
void daemon_conn_wake(struct daemon_conn *dc UNNEEDED)
{ fprintf(stderr, "daemon_conn_wake called!\n"); abort(); }
/* Generated stub for decode_channel_update_timestamps */
struct channel_update_timestamps *decode_channel_update_timestamps(const tal_t *ctx UNNEEDED,
				 const struct tlv_reply_channel_range_tlvs_timestamps_tlv *timestamps_tlv UNNEEDED)
{ fprintf(stderr, "decode_channel_update_timestamps called!\n"); abort(); }
/* Generated stub for decode_scid_query_flags */
bigsize_t *decode_scid_query_flags(const tal_t *ctx UNNEEDED,
				   const struct tlv_query_short_channel_ids_tlvs_query_flags *qf UNNEEDED)
{ fprintf(stderr, "decode_scid_query_flags called!\n"); abort(); }
/* Generated stub for decode_short_ids */
struct short_channel_id *decode_short_ids(const tal_t *ctx UNNEEDED, const u8 *encoded UNNEEDED)
{ fprintf(stderr, "decode_short_ids called!\n"); abort(); }
/* Generated stub for first_random_peer */
struct peer *first_random_peer(struct daemon *daemon UNNEEDED,
			       struct peer_node_id_map_iter *it UNNEEDED)
{ fprintf(stderr, "first_random_peer called!\n"); abort(); }
/* Generated stub for fromwire_gossipd_dev_set_max_scids_encode_size */
bool fromwire_gossipd_dev_set_max_scids_encode_size(const void *p UNNEEDED, u32 *max UNNEEDED)
{ fprintf(stderr, "fromwire_gossipd_dev_set_max_scids_encode_size called!\n"); abort(); }
/* Generated stub for gossmap_chan_byidx */
struct gossmap_chan *gossmap_chan_byidx(const struct gossmap *map UNNEEDED, u32 idx UNNEEDED)
{ fprintf(stderr, "gossmap_chan_byidx called!\n"); abort(); }
/* Generated stub for gossmap_chan_get_announce */
u8 *gossmap_chan_get_announce(const tal_t *ctx UNNEEDED,
			      const struct gossmap *map UNNEEDED,
			      const struct gossmap_chan *c UNNEEDED)
{ fprintf(stderr, "gossmap_chan_get_announce called!\n"); abort(); }
/* Generated stub for gossmap_chan_get_update */
u8 *gossmap_chan_get_update(const tal_t *ctx UNNEEDED,
			    const struct gossmap *map UNNEEDED,
			    const struct gossmap_chan *chan UNNEEDED,
			    int dir UNNEEDED)
{ fprintf(stderr, "gossmap_chan_get_update called!\n"); abort(); }
/* Generated stub for gossmap_chan_get_update_details */
void gossmap_chan_get_update_details(const struct gossmap *map UNNEEDED,
				     const struct gossmap_chan *chan UNNEEDED,
				     int dir UNNEEDED,
				     u32 *timestamp UNNEEDED,
				     u8 *message_flags UNNEEDED,
				     u8 *channel_flags UNNEEDED,
				     u32 *fee_base_msat UNNEEDED,
				     u32 *fee_proportional_millionths UNNEEDED,
				     struct amount_msat *htlc_minimum_msat UNNEEDED,
				     struct amount_msat *htlc_maximum_msat UNNEEDED)
{ fprintf(stderr, "gossmap_chan_get_update_details called!\n"); abort(); }
/* Generated stub for gossmap_chan_scid */
struct short_channel_id gossmap_chan_scid(const struct gossmap *map UNNEEDED,
					  const struct gossmap_chan *c UNNEEDED)
{ fprintf(stderr, "gossmap_chan_scid called!\n"); abort(); }
/* Generated stub for gossmap_find_chan */
struct gossmap_chan *gossmap_find_chan(const struct gossmap *map UNNEEDED,
				       const struct short_channel_id *scid UNNEEDED)
{ fprintf(stderr, "gossmap_find_chan called!\n"); abort(); }
/* Generated stub for gossmap_find_node */
struct gossmap_node *gossmap_find_node(const struct gossmap *map UNNEEDED,
				       const struct node_id *id UNNEEDED)
{ fprintf(stderr, "gossmap_find_node called!\n"); abort(); }
/* Generated stub for gossmap_manage_get_gossmap */
struct gossmap *gossmap_manage_get_gossmap(struct gossmap_manage *gm UNNEEDED)
{ fprintf(stderr, "gossmap_manage_get_gossmap called!\n"); abort(); }
/* Generated stub for gossmap_max_chan_idx */
u32 gossmap_max_chan_idx(const struct gossmap *map UNNEEDED)
{ fprintf(stderr, "gossmap_max_chan_idx called!\n"); abort(); }
/* Generated stub for gossmap_node_get_announce */
u8 *gossmap_node_get_announce(const tal_t *ctx UNNEEDED,
			      const struct gossmap *map UNNEEDED,
			      const struct gossmap_node *n UNNEEDED)
{ fprintf(stderr, "gossmap_node_get_announce called!\n"); abort(); }
/* Generated stub for gossmap_node_get_id */
void gossmap_node_get_id(const struct gossmap *map UNNEEDED,
			 const struct gossmap_node *node UNNEEDED,
			 struct node_id *id UNNEEDED)
{ fprintf(stderr, "gossmap_node_get_id called!\n"); abort(); }
/* Generated stub for gossmap_nth_node */
struct gossmap_node *gossmap_nth_node(const struct gossmap *map UNNEEDED,
				      const struct gossmap_chan *chan UNNEEDED,
				      int n UNNEEDED)
{ fprintf(stderr, "gossmap_nth_node called!\n"); abort(); }
/* Generated stub for master_badmsg */
void master_badmsg(u32 type_expected UNNEEDED, const u8 *msg)
{ fprintf(stderr, "master_badmsg called!\n"); abort(); }
/* Generated stub for next_random_peer */
struct peer *next_random_peer(struct daemon *daemon UNNEEDED,
			      const struct peer *first UNNEEDED,
			      struct peer_node_id_map_iter *it UNNEEDED)
{ fprintf(stderr, "next_random_peer called!\n"); abort(); }
/* Generated stub for peer_supplied_good_gossip */
void peer_supplied_good_gossip(struct daemon *daemon UNNEEDED,
			       const struct node_id *source_peer UNNEEDED,
			       size_t amount UNNEEDED)
{ fprintf(stderr, "peer_supplied_good_gossip called!\n"); abort(); }
/* Generated stub for queue_peer_msg */
void queue_peer_msg(struct daemon *daemon UNNEEDED,
		    const struct node_id *peer UNNEEDED,
		    const u8 *msg TAKES UNNEEDED)
{ fprintf(stderr, "queue_peer_msg called!\n"); abort(); }
/* Generated stub for status_fmt */
void status_fmt(enum log_level level UNNEEDED,
		const struct node_id *peer UNNEEDED,
		const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "status_fmt called!\n"); abort(); }
/* Generated stub for towire_warningfmt */
u8 *towire_warningfmt(const tal_t *ctx UNNEEDED,
		      const struct channel_id *channel UNNEEDED,
		      const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_warningfmt called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

int main(int argc, char *argv[])
{
	u8 *update;
	common_setup(argv[0]);

	update = tal_hexdata(NULL, "010276df7e70c63cc2b63ef1c062b99c6d934a80ef2fd4dae9e1d86d277f47674af3255a97fa52ade7f129263f591ed784996eba6383135896cc117a438c8029328206226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006700000100005d50f933000000900000000000000000000003e80000000a",
			     strlen("010276df7e70c63cc2b63ef1c062b99c6d934a80ef2fd4dae9e1d86d277f47674af3255a97fa52ade7f129263f591ed784996eba6383135896cc117a438c8029328206226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006700000100005d50f933000000900000000000000000000003e80000000a"));
	assert(crc32_of_update(update) == 0x1112fa30);
	tal_free(update);

	update = tal_hexdata(NULL, "010206737e9e18d3e4d0ab4066ccaecdcc10e648c5f1c5413f1610747e0d463fa7fa39c1b02ea2fd694275ecfefe4fe9631f24afd182ab75b805e16cd550941f858c06226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006d00000100005d50f935010000300000000000000000000000640000000b00000000000186a0",
			     strlen("010206737e9e18d3e4d0ab4066ccaecdcc10e648c5f1c5413f1610747e0d463fa7fa39c1b02ea2fd694275ecfefe4fe9631f24afd182ab75b805e16cd550941f858c06226e46111a0b59caaf126043eb5bbf28c34f3a5e332a1fc7b2b73cf188910f00006d00000100005d50f935010000300000000000000000000000640000000b00000000000186a0"));
	assert(crc32_of_update(update) == 0xf32ce968);
	tal_free(update);
	common_shutdown();
	return 0;
}
