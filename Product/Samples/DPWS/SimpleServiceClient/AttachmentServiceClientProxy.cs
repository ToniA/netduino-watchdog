//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     .NET Micro Framework MFSvcUtil.Exe
//     Runtime Version:2.0.00001.0001
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------


using System;
using System.Xml;
using Dpws.Client;
using Dpws.Client.Discovery;
using Dpws.Client.Eventing;
using Ws.Services;
using Ws.Services.Utilities;
using Ws.Services.Binding;
using Ws.Services.Soap;
using Ws.Services.Mtom;
using Ws.Services.WsaAddressing;
using Ws.Services.Xml;

namespace schemas.example.org.AttachmentService
{
    
    
    public class AttachmentServiceClientProxy : DpwsClient
    {
        
        private IRequestChannel m_requestChannel = null;
        
        public AttachmentServiceClientProxy(Binding binding, ProtocolVersion version) : 
                base(binding, version)
        {

            // Set client endpoint address
            m_requestChannel = m_localBinding.CreateClientChannel(new ClientBindingContext(m_version));
        }
        
        public virtual void OneWayAttachment(OneWayAttachmentRequest req)
        {

            // Create request header
            String action;
            action = "http://schemas.example.org/AttachmentService/OneWayAttachment";
            WsWsaHeader header;
            header = new WsWsaHeader(action, null, EndpointAddress, m_version.AnonymousUri, null, null);
            WsMessage request = new WsMessage(header, req, WsPrefix.None);

            // Create request serializer
            OneWayAttachmentRequestDataContractSerializer reqDcs;
            reqDcs = new OneWayAttachmentRequestDataContractSerializer("OneWayAttachmentRequest", "http://schemas.example.org/AttachmentService");
            request.Serializer = reqDcs;
            request.Method = "OneWayAttachment";


            // Indicate that this message will use Mtom encoding
            request.BodyParts = new WsMtomBodyParts();

            // Send service request
            m_requestChannel.Open();
            m_requestChannel.RequestOneWay(request);
            m_requestChannel.Close();
        }
        
        public virtual TwoWayAttachmentResponse TwoWayAttachment(TwoWayAttachmentRequest req)
        {

            // Create request header
            String action;
            action = "http://schemas.example.org/AttachmentService/TwoWayAttachment";
            WsWsaHeader header;
            header = new WsWsaHeader(action, null, EndpointAddress, m_version.AnonymousUri, null, null);
            WsMessage request = new WsMessage(header, req, WsPrefix.None);

            // Create request serializer
            TwoWayAttachmentRequestDataContractSerializer reqDcs;
            reqDcs = new TwoWayAttachmentRequestDataContractSerializer("TwoWayAttachmentRequest", "http://schemas.example.org/AttachmentService");
            request.Serializer = reqDcs;
            request.Method = "TwoWayAttachment";


            // Indicate that this message will use Mtom encoding
            request.BodyParts = new WsMtomBodyParts();

            // Send service request
            m_requestChannel.Open();
            WsMessage response = m_requestChannel.Request(request);
            m_requestChannel.Close();

            // Process response
            TwoWayAttachmentResponseDataContractSerializer respDcs;
            respDcs = new TwoWayAttachmentResponseDataContractSerializer("TwoWayAttachmentResponse", "http://schemas.example.org/AttachmentService");
            respDcs.BodyParts = response.BodyParts;
            TwoWayAttachmentResponse resp;
            resp = ((TwoWayAttachmentResponse)(respDcs.ReadObject(response.Reader)));
            return resp;
        }
    }
}