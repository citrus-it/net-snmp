/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.12 $ of : mfd-data-access.m2c,v $
 *
 * $Id$
 */
#ifndef IPCIDRROUTETABLE_DATA_ACCESS_H
#define IPCIDRROUTETABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipCidrRouteTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * ipCidrRouteTable is subid 4 of ipForward.
     * Its status is Deprecated.
     * OID: .1.3.6.1.2.1.4.24.4, length: 9
     */


    int
        ipCidrRouteTable_init_data(ipCidrRouteTable_registration_ptr
                                   ipCidrRouteTable_reg);


    /*
     * TODO:180:o: Review ipCidrRouteTable cache timeout.
     * The number of seconds before the cache times out
     */
#define IPCIDRROUTETABLE_CACHE_TIMEOUT   60

    void            ipCidrRouteTable_container_init(netsnmp_container **
                                                    container_ptr_ptr,
                                                    netsnmp_cache * cache);
    int             ipCidrRouteTable_cache_load(netsnmp_container *
                                                container);
    void            ipCidrRouteTable_cache_free(netsnmp_container *
                                                container);

    int             ipCidrRouteTable_row_prep(ipCidrRouteTable_rowreq_ctx *
                                              rowreq_ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* IPCIDRROUTETABLE_DATA_ACCESS_H */
